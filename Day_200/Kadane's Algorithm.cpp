
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) 
    {
        long sum = 0;
        long newSum = arr[0];
        for(int i=0; i<arr.size(); i++)
        {
            sum += arr[i];
            if(sum > newSum)
            {
                newSum = sum;
            }
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return newSum;
    }
};
