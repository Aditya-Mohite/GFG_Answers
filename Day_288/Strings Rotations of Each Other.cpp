
class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) 
    {
        string str = s1 + s1;
    
        int i = 0, j = 0;
        
        while (i < str.length() && j < s2.length()) 
        {
            if (str[i] == s2[j]) 
            {
                i++;
                j++;
            } 
            else 
            {
                i++;
            }
        }
        
        return (j == s2.length());
    }
};
