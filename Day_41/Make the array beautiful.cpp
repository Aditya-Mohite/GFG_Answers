
class Solution 
{
  public:
    vector<int> makeBeautiful(vector<int> arr) 
    {
        vector<int> res;
        stack<int> st;
        for(int i=0; i<arr.size(); i++)
        {
            int k = arr[i];
            if(st.empty())
            {
                st.push(k);
            }
            else
            {
                if((st.top()<0 && k>=0) || (st.top()>=0 && k<0))
                {
                    st.pop();
                }
                else
                {
                    st.push(k);
                }
            }
        }
        
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
