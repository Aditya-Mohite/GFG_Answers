
class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) 
    {
        vector<int> dp(arr.size(), 0);
        for(int i=1; i<arr.size(); i++)
        {
            dp[i] = INT_MAX;
            for(int j=max(0, i-k);j<i;j++)
            {
                dp[i] = min(dp[i], dp[j] + abs(arr[i]-arr[j]));
            }
        }
        return dp[arr.size() - 1];
    }
};
