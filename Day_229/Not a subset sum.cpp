
class Solution {
  public:
    long long findSmallest(vector<int> &arr) 
    {
        int ans = 1;
        for(int i: arr)
        {
            if(i > ans)
                return ans;
            
            ans += i;
        }
        return ans;
    }
};
