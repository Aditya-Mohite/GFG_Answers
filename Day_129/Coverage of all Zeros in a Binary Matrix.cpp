
class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) 
    {
        int count=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    if( i>0 && matrix[i-1][j]==1) 
                        count++;
                    if(j>0 && matrix[i][j-1]==1) 
                        count++;
                    if(i<n-1 && matrix[i+1][j]==1) 
                        count++;
                    if(j<m-1 && matrix[i][j+1]==1) 
                        count++;
                }
            }
        }
        return count;
    }
};
