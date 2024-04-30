
class Solution
{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n)
    {
        vector<vector<int>>ans;
        int i=0,j=1;
        while(j<n)
        {
            if(A[j] > A[j-1])
            {
                j++;
                if(j==n){
                    ans.push_back({i,j-1});
                }
            }
            else
            {
                if(j-i>1)
                {
                    ans.push_back({i,j-1});
                }
                i=j;
                j++;
            }
        }
        return ans;
    }
};
