
class Solution {
  public:
    int maxLength(string& str) 
    {
        int ans = 0, op = 0, cl = 0;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == '(') 
                op++;
            else 
                cl++;
            if(cl > op) 
                op = cl = 0;
            if(cl == op) 
                ans = max(ans, cl*2);
        }
        op = cl = 0;
        for(int i=str.length()-1; i>=0; i--)
        {
            if(str[i] == '(')
                op++;
            else 
                cl++;
            if(cl < op) 
                op = cl = 0;
            if(cl == op) 
                ans = max(ans, cl*2);
        }
        return ans;
    }
};
