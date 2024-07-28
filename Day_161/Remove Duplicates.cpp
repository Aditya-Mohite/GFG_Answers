
class Solution 
{
  public:

    string removeDups(string str) 
    {
        map<char ,int> mp;
        string ans;
        for(int i=0;i<str.length();i++)
        {
            mp[str[i]]++;
        }
        for(int i=0;i<str.length();i++)
        {
          char ch = str[i];
          if(mp[ch] > 1)
          {
             ans.push_back(ch);
             mp[ch] = 0;
          }
          else if(mp[ch] == 1)
          {
             ans.push_back(ch);
          }
         
      }
      return ans;
    }
};
