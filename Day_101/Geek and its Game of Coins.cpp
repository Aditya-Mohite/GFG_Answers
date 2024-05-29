
class Solution 
{
  public:
    int findWinner(int n, int x, int y) 
    {
        if(x % 2 && y % 2) 
        {
            return n % 2;
        }
        vector<bool> dp(n+1, false);
        
        for(int i = 1; i <= n; i++) 
        {
            bool w = !dp[i-1];
            if(i >= x) w |= !dp[i-x];
            if(i >= y) w |= !dp[i-y];
            dp[i] = w;
        }
        return dp[n];
    }
};
