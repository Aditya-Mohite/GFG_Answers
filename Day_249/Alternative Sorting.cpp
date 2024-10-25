
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) 
    {
        int n=arr.size();
        
        if(n==1) 
            return arr;
            
        sort(arr.begin(), arr.end());
        vector<int>ans(n);
        int ind=n-1;
        
        for(int i=0; i<n; i+=2)
        {
            ans[i]=arr[ind--];
        }
        
        ind=0;
        
        for(int i=1; i<n; i+=2)
        {
            ans[i]=arr[ind++];
        }
        return ans;
    }
};
