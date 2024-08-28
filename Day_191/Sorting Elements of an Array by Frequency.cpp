
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool sorting(pair<int, int> &a, pair<int, int> &b)
    {
        if(a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second > b.second;
    }
    vector<int> sortByFreq(vector<int>& arr) 
    {
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        
        vector<pair<int, int>> v;
        for(auto i: mp)
        {
            pair<int, int> p = make_pair(i.first, i.second);
            v.push_back(p);
        }
        
        sort(v.begin(), v.end(), sorting);
        
        vector<int> ans;
        for(auto i: v)
        {
            int val = i.first;
            int cnt = i.second;
            for(int i=0; i<cnt; i++)
            {
                ans.push_back(val);
            }
            
        }
        return ans;
    }
};
