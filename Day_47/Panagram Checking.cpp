
class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) 
    {
        int n = s.length();
        if(n < 26)
            return false;
            
        bool visit[26] = {0};
        
        for(int i=0; i<n; i++)
        {
            char x = s[i];
            if(x >= 'a' && x <= 'z')
                visit[x - 'a'] = true;
            if(x >= 'A' && x <= 'Z')
                visit[x - 'A'] = true;
        }
        for(int i=0; i<26; i++)
            if(visit[i] == false)
                return false;
        return true;
    }

};
