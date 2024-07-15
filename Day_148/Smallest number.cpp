class Solution 
{
  public:
    string smallestNumber(int s, int d) 
    {
        
        if (s > 9 * d) 
        {
            return "-1";
        }
        
        string str(d, '0');  
        
        s -= 1; 
        
        for (int i = d - 1; i >= 0; --i) 
        {
            if (s > 9) 
            {
                str[i] = '9';
                s -= 9;
            } 
            else 
            {
                str[i] = '0' + s;
                s = 0;
            }
        }
        
        str[0] = '1' + str[0] - '0';  
        
        return str;
    }
};
