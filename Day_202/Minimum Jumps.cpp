class Solution {
  public:
    int minJumps(vector<int>& arr) 
    {
        int jump = 0;
        int n = arr.size();
        int maxi = 0;
        int range = 0;
        
        for(int i=0; i<n; i++)
        {
            maxi = max(maxi, arr[i]+i);
            if(range == i)
            {
                range = maxi;
                jump++;
                if(range >= n-1)
                {
                  return jump;
                }
            }
        }
        
        return -1;
    }
};
