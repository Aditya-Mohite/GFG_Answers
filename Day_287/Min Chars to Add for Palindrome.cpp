
class Solution {
  public:
    int minChar(string& s) 
    {
        int n = s.size();
        string temp = s; 
        reverse(temp.begin(), temp.end());

        string combined = s + '#' + temp; 
        int m = combined.size();

        vector<int> v(m, 0);
        for (int i = 1; i < m; i++) 
        {
            int len = v[i - 1];
            while (len > 0 && combined[i] != combined[len]) 
            {
                len = v[len - 1];
            }
            if (combined[i] == combined[len]) 
            {
                len++;
            }
            v[i] = len;
        }

        return n - v[m - 1];
    }
};
