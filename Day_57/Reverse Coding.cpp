
class Solution 
{
  public:
  # define mod (int)(1e9 + 7)
    int sumOfNaturals(int n) 
    {
        int sum  = ((n* 1LL * (n+1))/2) % mod;
        return sum;
    }
};
