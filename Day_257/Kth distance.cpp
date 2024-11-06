
class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) 
    {
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++)
        {
            if(mp.find(arr[i]) != mp.end())
            {
                if(i - mp[arr[i]] <= k)
                {
                    return true;
                }
            }
            mp[arr[i]] = i;
        }
        return false;
    }
};