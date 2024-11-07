
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) 
    {
        int n = arr.size();
        int leftsum = arr[0];
        int rightsum = arr[n-1];
        int midsum = 0;
        for(int i=1; i<n-1; i++) 
        {
            midsum+=arr[i];
        }
        
        int i=1;
        int j=n-2;
        
        while(i<=j)
        {
            if(leftsum == rightsum && leftsum == midsum)
            {
               return {i-1,j};
            }
            if(leftsum < rightsum)
            {
                leftsum+=arr[i];
                midsum-=arr[i];
                i++;
            }
            else
            {
                rightsum+=arr[j];
                midsum-=arr[j];
                j--;
            }
        }
        return {i,j};
    }
};
