class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        for(char &ch: x)
        {
            if(ch=='(' || ch=='[' || ch=='{')
            {
                st.push(ch);
            }
            else if(ch==')')
            {
                if(st.empty() || st.top()!='(') 
                    return 0;
                else 
                    st.pop();
            }
            else if(ch=='}')
            {
                if(st.empty() || st.top()!='{') 
                    return 0;
                else 
                    st.pop();
            }
            else
            {
                if(st.empty() || st.top()!='[') 
                    return 0;
                else 
                    st.pop();
            }
        }
        return st.empty()?1:0;
    }

};
