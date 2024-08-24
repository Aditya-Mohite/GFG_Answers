
class Solution {
  public: 
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, vector<int>& wt, vector<int>& val) 
    {
        int dp[W + 1];
        memset(dp, 0, sizeof(dp));
    
        for (int i = 1; i < val.size() + 1; i++) 
        {
            for (int w = W; w >= 0; w--) 
            {
                if (wt[i - 1] <= w)
                {    
                    dp[w] = max(dp[w], dp[w - wt[i - 1]] + val[i - 1]);
                }
            }
        }
        return dp[W];
    }
};
