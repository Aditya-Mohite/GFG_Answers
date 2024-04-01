
class Solution
{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int h[], int n) 
	{
	    int cnt = h[0];
	    int a = 0;
	    for(int i=0; i<n; i++)
	    {
	        if(h[i] > cnt)
	        {
	            cnt = h[i];
	            a++;
	        }
	    }
	    return a+1;
	}
};
