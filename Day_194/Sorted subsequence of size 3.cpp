class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) 
    {
        int n = arr.size();
        if(n < 3){
            return {};
        }
        vector<int> lmin = arr;
        for(int i = 1; i< n; i++)
        {
            lmin[i] = min(arr[i], lmin[i-1]);
        }
        vector<int> rmax = arr;
        for(int i = n-2; i>=0; i--)
        {
           rmax[i] = max(arr[i], rmax[i+1]);
        }
        
        for(int i = 1; i < n-1; i++)
        {
            if(arr[i]<rmax[i+1] && arr[i] > lmin[i-1])
            {
                return {lmin[i-1], arr[i], rmax[i+1]};
            }
        }
        
        return {};
        
    }
};
