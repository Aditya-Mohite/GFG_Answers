
class Solution {
  public:
    int isValid(string str) 
    {
        int i = 0;
        int seg = 0;
        while(i < str.length())
        {
            string temp = "";
            while(i < str.length() && str[i] != '.')
            {
                if(!isdigit(str[i]))
                    return false;
                
                temp += str[i];
                i++;
            }
            
            if(temp.empty() || (temp[0]=='0' && temp.length()>1) || stoi(temp)<0 || stoi(temp)>255)
            {
                return false;
            }
            seg++;
            i++;
        }
        return seg == 4;

    }
};
