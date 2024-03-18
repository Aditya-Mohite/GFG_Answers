
class Solution
{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) 
	{
	    vector<pair<int, int>> ans;
	    for(int i=0; i<n; i++)
	    {
	        ans.push_back({arr[i], i});
	    }
	    sort(ans.begin(), ans.end());
	    for(int i=0; i<n; i++)
	    {
	        arr[ans[i].second] = i;
	    }
	}

};
