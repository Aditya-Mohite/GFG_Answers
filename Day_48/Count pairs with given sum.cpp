
class Solution
{   
public:
    int getPairsCount(int arr[], int n, int k) 
    {
        unordered_map<int, int> mp;
        int cnt = 0;
        
        for(int i=0; i<n; i++)
        {
            int num = k - arr[i];
            if(mp.find(num) != mp.end())
            {
                cnt += mp[num];
            }
            mp[arr[i]]++;
        }
        return cnt;
    }
};
