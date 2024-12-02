
class Solution {
  public:
    vector<int> search(string& pat, string& txt) 
    {
        int n = txt.size(); 
        int m = pat.size();
        int pos = 0;
        vector<int> ans;
        
        while(true) 
        {
            size_t ind = txt.find(pat, pos);
            if(ind != string::npos) 
            {
                ans.push_back(ind);
                pos = ind+1;
            }
            else 
            {
                break;
            }
        }
        
        return ans;
    }
};
