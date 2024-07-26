
class Solution {
  public:

    bool kPangram(string str, int k) 
    {
        set<char> st;
        int cnt = 0;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                st.insert(str[i]);
            }
            else
            {
                cnt++;
            }
        }
        
        if(st.size() == 26)
            return true;
            
        if(str.length() - cnt < 26)
            return false;
            
        if(k+ st.size() >= 26)
            return true;
        
        return false;
    }
};
