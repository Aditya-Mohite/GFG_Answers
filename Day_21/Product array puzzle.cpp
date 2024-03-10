
class Solution
{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) 
    {
        vector<long long> res(n);
        res[0] = 1;
        for(int i=1; i<n; i++)
        {
            res[i] = res[i-1] * nums[i-1];
        }
        long ans = 1;
        for(int i=n-1; i>=0; i--)
        {
            res[i] *= ans;
            ans *= nums[i];
        }
        return res;
    }
};


