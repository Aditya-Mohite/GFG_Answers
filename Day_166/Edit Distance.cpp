class Solution 
{
  public:
    int editDistance(string str1, string str2) 
    {
        int n = str1.length();
        int m = str2.length();
    
        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    
        for (int i = 0; i <= n; i++) 
        {
            for (int j = 0; j <= m; j++) 
            {
                if (i == 0) 
                {
                    dp[i][j] = j;
                }
                else if (j == 0) 
                {
                    dp[i][j] = i;
                }
                else if (str1[i - 1] == str2[j - 1]) 
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else 
                {
                    dp[i][j] = 1 + min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]}); 
                }
            }
        }
    
        return dp[n][m];
        
    }
};
