
class Solution {
  public:
    long long int floorSqrt(long long int n) 
    {
        long long int ans = 0;
        if(n == 0 || n == 1)
            return n;
            
        int start = 0;
        int end = n/2;
        while(start <= end)
        {
            long long int mid = start + (end - start)/2;
            if((mid * mid) == n)
            {
                return mid;
            }
            if((mid * mid) > n)
            {
                end = mid - 1;
            }
            else
            {
                ans = mid;
                start = mid + 1;
            }
        }
        return floor(ans);
    }
};
