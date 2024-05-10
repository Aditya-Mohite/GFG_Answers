
class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int row[matrix.size()] = { 0 };
        int col[matrix[0].size()] = { 0 };
        
        for(int i=0; i<matrix.size(); ++i)
        {
            for(int j=0; j<matrix[i].size(); ++j)
            {
                if(matrix[i][j] == 1)
                {
                    row[i]=1, col[j] = 1;
                }
            }
        }
        
        for(int i=0; i<matrix.size(); ++i)
        {
            for(int j=0; j<matrix[0].size(); ++j)
            {
                matrix[i][j] = row[i] | col[j];
            }
        }
    }
};
