
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) 
    {
        vector<int> v(arr.size(), 0);
        int k = 0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] != 0)
            {
                v[k] = arr[i];
                k++;
            }
        }
        arr = v;
        // int count=0;
        // for(int i=0;i<arr.size();i++)
        // {
        //     if(arr[i]!=0)
        //     {
        //         swap(arr[i],arr[count]);
        //         count++;
                
        //     }
        // }
    }
};
