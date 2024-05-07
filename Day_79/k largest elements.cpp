
class Solution
{
public:	
	vector<int> kLargest(int arr[], int n, int k) 
	{
	    vector<int> res;
	    sort(arr, arr+n);
	    for(int i=n-k; i<n; i++)
	    {
	        res.push_back(arr[i]);
	    }
	    reverse(res.begin(), res.end());
	    return res;
	}

};
