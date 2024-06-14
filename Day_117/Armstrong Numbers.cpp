
class Solution 
{
  public:
    string armstrongNumber(int n) 
    {
        int temp = n;
        int sum = 0;
        while(temp) 
        {
            int x = temp%10;
            sum += pow(x, 3);
            temp /= 10;
        }
        if(sum == n)
            return "true";
        
        return "false";
    }
};
