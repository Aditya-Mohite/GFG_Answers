
class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) 
    {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto it:arr)
        {
            if(mp.find(it)==mp.end())
            {
                ans.push_back(it);
                mp[it]=1;
            }
        }
        return ans;
    }
};
