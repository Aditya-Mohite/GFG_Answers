
class Solution
{
  public:
    int minDist(int a[], int n, int x, int y) 
    {
        int c1 = -1, c2 = -1, res = INT_MAX;
        
        for(int i=0; i<n; i++)
        {
            if(a[i] == x)
            {
                c1 = i;
            }
            if(a[i] == y)
            {
                c2 = i;
            }
            if(c1 != -1 && c2 != -1)
            {
                res = min(res,abs(c1-c2));
            }
        }
        if(res!=INT_MAX)
        {
            return res;
        }
        return -1;
    }
};
