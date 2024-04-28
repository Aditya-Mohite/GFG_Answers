
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    int row = -1, ct = 0;
        int max = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]==1)
                {
                    ct++;
                }
            }
            if(ct > max)
            {
                row = i;
                max = ct;
            }
            ct = 0;
        }
        return row;
	}
};
