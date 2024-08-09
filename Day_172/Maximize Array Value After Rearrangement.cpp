class Solution 
{
  public:
    int Maximize(vector<int> &arr) 
    {
        long mod = pow(10, 9)+7;
        sort(arr.begin(), arr.end());
        long int ans = 0;
        for(int i=0; i<arr.size(); i++)
        {
            ans = (ans+ (long)arr[i]*i) % mod;
            // ans %= mod;
        }
        return ans;
    }
};
