
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) 
    {
        int m = n/k;
        int cnt = 0;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
            
        }
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            int num = it->second;
            if(num > m)
            cnt++;
        }
        return cnt;
    }
};
