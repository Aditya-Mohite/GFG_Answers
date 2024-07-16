
class Solution {
  public:

    string printString(string s, char ch, int count) 
    {
        string str = "";
        int cnt = 0;
        
        for(int i=0; i<s.length(); i++)
        {
            if (s[i]==ch) 
            {
                count--;
            }
            if (count==0) 
            {
                return s.substr(i+1);
            }
        }
        return "";
    }
};
