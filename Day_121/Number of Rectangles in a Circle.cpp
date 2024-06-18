
class Solution {
  public:
    int rectanglesInCircle(int r) 
    {
        int mxLen = 2*r - 1;
        int ans = 0;
        int rad = 4 * r * r;
        
        for(int i = 1; i <= mxLen; i++)
        {
            for(int j = mxLen; j >= 1; j--)
            {
                int hyp = (j * j) + (i * i);
                if(hyp <= rad)
                {
                    ans += j;
                    break;
                } 
            }
        }
        
        return ans;
    }
};
