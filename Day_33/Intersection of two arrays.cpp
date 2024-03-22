
class Solution 
{
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) 
    {
        int cnt = 0;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        for(int i=0; i<m; i++)
        {
            if(mp.find(b[i]) != mp.end())
            {
                cnt++;
                mp.erase(b[i]);
            }
        }
        return cnt;
    }
};
