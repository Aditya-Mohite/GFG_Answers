
class Solution 
{
  public:
    bool check(int num) 
    {   
        int count=0;
        while(num)
        {
           int d=num%10;
           if(d==4)
           {
               return 1;
           }
           num=num/10;
        }
        return 0;
    }
    int countNumberswith4(int n) 
    {
        // code here
        int count=0;
        for(int i=4;i<=n;i++)
        {
            if(check(i))
            {
                count++;
            }
        }
        return count;
    }
};
