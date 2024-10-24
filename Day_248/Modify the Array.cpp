
class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) 
    {
        vector<int> ans;
        for(int i=0; i<arr.size(); i++)
        {
            if(i < arr.size()-1 && arr[i] == arr[i+1] && arr[i] != 0)
            {
                ans.push_back(arr[i] * 2);
                i++;
            }
            else if(arr[i] != 0)
            {
                ans.push_back(arr[i]);
            }
        }
        
        while(ans.size() < arr.size())
        {
            ans.push_back(0);
        }
        return ans;
    }
};
