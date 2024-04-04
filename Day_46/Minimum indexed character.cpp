
class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        unordered_map<char, int> mp;
        for(int i=0; i<patt.size(); i++)
        {
            mp[patt[i]];
        }
        for(int i=0; i<str.size(); i++)
        {
            char ch = str[i];
            if(mp.find(ch) != mp.end())
            {
                return i;
            }
        }
        return -1;
    }
};
