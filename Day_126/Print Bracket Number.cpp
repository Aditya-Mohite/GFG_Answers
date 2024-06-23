
class Solution 
{
  public:

    vector<int> bracketNumbers(string str) 
    {
        vector<int> vec;
        stack<int> st;
        int cnt = 1;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == '(')
            {
                st.push(cnt);
                vec.push_back(cnt);
                cnt++;
            }
            else if(str[i] == ')')
            {
                vec.push_back(st.top());
                st.pop();
            }
        }
        return vec;
    }
};
