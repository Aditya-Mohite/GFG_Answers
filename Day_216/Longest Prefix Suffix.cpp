class Solution {
  public:
    int lps(string s) 
    {
        vector<int> z(s.size());
        int l = 0, r = 0, ans = 0;
        
        for (int i = 1; i < s.size(); i++) 
        {
            if (i < r) 
            {
                z[i] = min(z[i - l], r - i);
            }
        
            while (i + z[i] < s.size() && s[z[i]] == s[i + z[i]]) 
            {
                z[i]++;
            }
        
            if (i + z[i] > r) 
            {
                l = i;
                r = i + z[i];
            }
        
            if (i + z[i] == s.size()) 
            {
                return z[i];
            }
        }
        
        return 0;
    }
};
