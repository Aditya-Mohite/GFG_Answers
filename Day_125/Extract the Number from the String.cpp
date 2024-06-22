
class Solution {
  public:
    long long ExtractNumber(string sentence) 
    {
        string _maxi;
        long long maxi = -1, temp;
        int i = 0, j = 0;
        
        while(i < sentence.size())
        {
            bool t = 0;
            if(sentence[i] >= '0' && sentence[i] <= '9')
            {
                while(i < sentence.size() && (sentence[i] >= '0' && sentence[i] <= '9'))
                {
                    if(sentence[i] == '9')   t = 1;
                    i++;
                }
                if(!t)
                {
                    _maxi = sentence.substr(j, i-j);
                    temp = stoll(_maxi);
                    maxi = max(maxi, temp);
                }
            }
            i++;
            j = i;
        }
        return maxi;
    }
};
