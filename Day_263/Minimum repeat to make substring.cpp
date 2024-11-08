class Solution {
  public:
    int minRepeats(string& s1, string& s2) 
    {
        string s3 = s1;
        int cnt = 1;
        
        while (s3.length() < s2.length()) 
        {
            s3 += s1;
            cnt++;
        }
        
        if (s3.find(s2) != string::npos) 
            return cnt;
    
        s3 += s1;
        cnt++;
    
        if (s3.find(s2) != string::npos) 
            return cnt;
    
        return -1;
    }
};
