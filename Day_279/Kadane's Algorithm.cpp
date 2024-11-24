
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) 
    {
        // code here...
        int curr=0;
        int maxi=arr[0];
        for(int i=0;i<arr.size();i++)
        {
            curr+=arr[i];
            maxi=max(maxi,curr);
            if(curr<0)
            {
               curr=0; 
            }
         
        }
        return maxi;
    }
};
