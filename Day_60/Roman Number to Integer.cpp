
class Solution 
{
  public:
    int romanToDecimal(string &str) 
    {
        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int result = 0;
        int n = str.size();
        
        for (int i = 0; i < n; ++i) 
        {
            if (i < n - 1 && romanValues[str[i]] < romanValues[str[i + 1]]) 
            {
                result -= romanValues[str[i]];
            } 
            else 
            {
                result += romanValues[str[i]];
            }
        }
        
        return result;
    }
};
