
class Solution {
  public:
    int padovanSequence(int n) 
    {
        int mod = pow(10, 9)+7;
        if(n == 0 || n == 1 || n == 2)
            return 1;
        
        int n1 = 1, n2 = 1, n3 = 1;
        int p = 0;
        
        n -= 2;
        
        while(n--)
        {
            p = (n2 + n3) % mod;
            
            n3 = n2;
            n2 = n1;
            n1 = p;
        }
        return p;
        
    }
};
