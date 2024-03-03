class Solution{
public:
	int findMaximum(int arr[], int n) 
	{
	    int s = 0, e = n-1;
	    int mid = (s+e)/2;
	    while(s<e)
	    {
	        if(arr[mid] > arr[mid+1])
	        {
	            e = mid;
	        }
	        else
	        {
	            s = mid + 1;
	        }
	        mid = (s+e)/2;
	    }
	    return arr[s];
	}
};
