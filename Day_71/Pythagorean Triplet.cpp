
class Solution
{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) 
	{
	    unordered_set<int> mp;
	    for(int i=0; i<n; i++)
	    {
	        mp.insert(arr[i] * arr[i]);
	    }
	    for(auto i:mp)
	    {
	        for(auto j:mp)
	        {
	            if(mp.find(i+j) != mp.end())
	            return true;
	        }
	    }
	    return false;
	}
};
