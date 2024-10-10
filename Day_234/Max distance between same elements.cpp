
class Solution {
  public:
    int maxDistance(vector<int> &arr) 
    {
        map<int, vector<int>>m;
        for(int i=0; i<arr.size(); i++)
        {
            m[arr[i]].push_back(i);
        }
        
        int maxxi=0;
        
        for(auto i: m)
        {
             int n=i.second.size();
             maxxi=max(maxxi, i.second[n-1]-i.second[0]);
        }
        
        return maxxi;
    }
};
