
class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) 
    {
        map<int,vector<int>> mp;
        vector<int> ans;
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(abs(arr[i]-x)==0)
            {
                continue;
                
            }
            mp[abs(arr[i]-x)].push_back(arr[i]);
        }
        for(auto it:mp)
        {
            if(k>0 && it.second.size()>=1)
            {
                ans.push_back((it.second)[0]);
                k--;
            }
            if(k>0 && it.second.size()>=2)
            {
                ans.push_back((it.second)[1]);
                k--;
            }
        }
        return ans;
    }
};
