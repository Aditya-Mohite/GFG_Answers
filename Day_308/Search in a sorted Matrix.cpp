
class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) 
    {
        int m = mat.size(); 
        int n = mat[0].size();
        if(n == 0)
        {
            return false;
        }
        for(int i=0;i<m;i++)
        {
            int low = 0, high = n-1;
            while(low <= high)
            {
             int mid = low + (high-low)/2;
             if(mat[i][mid] == x)
             {
                 return true;
             }
             else if(mat[i][mid] > x)
             {
                 high = mid - 1;
             }
             else
             {
                 low = mid + 1;
             }
            }
        }
        return false;
    }
};
