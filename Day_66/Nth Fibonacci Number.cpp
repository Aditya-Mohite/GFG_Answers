
class Solution {
  public:
    int nthFibonacci(int n)
    {
        int a=0;
        int b=1;
        int c;
        if(n==0||n==1)
        return n;
        for(int i=2;i<=n;i++)
        {
            c=(a+b)%1000000007;
            a=b;
            b=c;
        }
        return c%1000000007;
    }
};
