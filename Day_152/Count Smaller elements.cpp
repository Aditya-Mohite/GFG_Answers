class Solution 
{
  public:
    vector<int> constructLowerArray(vector<int> &arr) 
    {
        vector<int> ans;
        vector<int> count;
        
        for (int i=arr.size()-1; i>=0; --i) 
        {
            int num = arr[i];
            int index = lower_bound(count.begin(), count.end(), num) - count.begin();
            ans.push_back(index);
            count.insert(count.begin() + index, num);
        }
    
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
