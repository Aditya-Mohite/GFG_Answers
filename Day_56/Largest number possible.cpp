
class Solution
{
public:
    string findLargest(int N, int S)
    {
        if((S==0 && N>1 ) || S>9*N) return "-1";
        string t="";
        
        while(S>9)
        {
            t+='9';
            S=S-9;
        }
        t += to_string(S);
        while(t.size()<N)
        {
            t+='0';
        }
        if(t.size()!=N) 
        return "-1";
        
        
        return t;
    }
};
