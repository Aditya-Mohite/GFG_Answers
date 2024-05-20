
class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    long long int e=n;
            long long int ans=1;
            long long int base=x;
            while(e>0)
            {
                if(e%2!=0)
                {
                    ans*=base;
                    ans%=M;
                    e--;
                }
                else
                {
                    base*=base;
                    base%=M;
                    e/=2;
                }
            }
            return ans%M;
		}
};
