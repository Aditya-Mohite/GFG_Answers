
class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) 
    {
        int k = 0;
        for(int i=0; i<=str.size(); i++)
        {
            if(str[i] == '.' || i == str.size())
            {
                reverse(str.begin()+k, str.begin()+i);
                k = i+1;
            }
        }
        reverse(str.begin(), str.end());
        return str;
    }
};
