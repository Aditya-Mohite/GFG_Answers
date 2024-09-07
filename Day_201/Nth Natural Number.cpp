
class Solution {
  public:
    long long findNth(long long n) 
    {
        long long ans = 0, i = 0;
        while(n > 0)
        {
            ans += (n % 9) * pow(10, i);
            i++;
            n /= 9;
        }
        return ans;
    }
};
