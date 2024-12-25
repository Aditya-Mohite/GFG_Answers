
class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) 
    {
        bool res = false;
        for (auto i: mat) 
        {
            int n = i.size();
            int l = 0;
            int r = n-1;
            int mid = (l+r)/2;
            while(l<=r) 
            {
                mid = (l+r)/2;
                if (i[mid] == x) 
                    return true;
                else if (i[mid]>x) 
                    r = mid-1;
                else 
                    l = mid+1;
            }
            
        }
        return false;
    }
};