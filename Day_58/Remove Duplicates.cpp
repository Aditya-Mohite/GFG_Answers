
class Solution
{
public:	
		
	string removeDups(string S) 
	{
	    string str = "";
	    str += S[0];
	    for(int i=0; i<S.length(); i++)
	    {
	        if(str.find(S[i]) == string::npos)
	        {
	            str += S[i];
	        }
	    }
	    return str;
	}
};
