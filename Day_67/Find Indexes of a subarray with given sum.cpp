
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        if(s == 0)
        {
            for(int i=0; i<n; i++)
            {
                if(arr[i] == 0)
                {
                    return {i+1, i+1};
                }
            }
            return {-1};
        }
        long long ans = 0;
        int a = 0;
        for(int i=0; i<n; i++)
        {
            ans += arr[i];
            while(ans > s)
            {
                ans -= arr[a++];
            }
            if(ans == s)
            {
                return {a+1, i+1};
            }
        }
        return {-1};
    }
};
