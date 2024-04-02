
class Solution
{
public:	
	int isPalindrome(string S)
	{
	    int end = S.size()-1;
	    int start = 0;
	    while(start <= end)
	    {
	        if(S[start++] != S[end--])
	        {
	            return 0;
	        }
	        
	    }
	    return 1;
	}

};
