
class Solution {
  public:

    void rearrange(vector<int> &arr) 
    {
        vector<int> pos, neg;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] < 0)
            {
                neg.push_back(arr[i]);
            }
            else
            {
                pos.push_back(arr[i]);
            }
        }
        
        int i = 0, j = 0, k = 0;
        while(i < pos.size() && j < neg.size())
        {
            if(k%2 == 0)
                arr[k++] = pos[i++];
            else
                arr[k++] = neg[j++];
        }
        while(i < pos.size())
            arr[k++] = pos[i++];
        while(j < neg.size())
            arr[k++] = neg[j++];
    }
};
