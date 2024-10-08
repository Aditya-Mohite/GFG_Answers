
class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) 
    {
        int n = nums.size();
        vector<long long int> ans(n, 0);
        int zero = 0;
        long long int product = 1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                zero++;
            }
            else
                product *= nums[i];
                
        }
        if(zero >= 2)
        {
            return ans;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(zero == 1 && nums[i] == 0)
                ans[i] = product;
            else if(nums[i] != 0 && zero == 0)
                ans[i] = product / nums[i];
        }
        
        return ans;
    }
};
