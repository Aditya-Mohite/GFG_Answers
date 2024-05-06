
class Solution
{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) 
	{
	    int start = 0;
	    int end = n-1;
	    int mid = start + (end - start)/2;
	    int fst = -1, lst = -1;
	    
	    // find fisrt occurence
	    while(start <= end)
	    {
	        if(arr[mid] == x)
	        {
	            fst = mid;
	            end = mid - 1; // to right side
	        }
	        if(x > arr[mid])
	        {
	            start = mid + 1;
	        }
	        else 
	        {
	            end = mid - 1;
	        }
	        mid = start + (end - start)/2;
	    }
	    
	    if(fst == -1)  // element doesn't exist in array
	    {
	        return 0;
	    }
	    
	    // re-assigning values
	    start = 0;
	    end = n - 1;
	    
	    while(start <= end)
	    {
	        if(arr[mid] == x)
	        {
	            lst = mid;
	            start = mid + 1;  // to left side
	        }
	        if(x < arr[mid])
	        {
	            end = mid - 1;
	        }
	        else
	        {
	            start  = mid + 1;
	        }
	        mid = start + (end - start)/2;
	    }
	    
	    int ans = lst - fst + 1;
	    
	    return ans;
	}
};
