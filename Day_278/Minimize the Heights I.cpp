
class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) 
    {
        sort(arr.begin(), arr.end());
        int ans = arr[arr.size()-1] - arr[0];
        for(int i=1; i<arr.size(); i++)
        {
            int maxi = max(arr[i-1]+k, arr[arr.size()-1]-k);
            int mini = min(arr[0]+k, arr[i]-k);
            ans = min(maxi-mini, ans);
        }
        return ans;
    }
};
