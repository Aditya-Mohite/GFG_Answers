
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) 
    {
        map<int, int> mp;
        int n = arr.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto it:mp)
        {
            if(it.second>(n/3))
                ans.push_back(it.first);
        }
        return ans;
    }
};
