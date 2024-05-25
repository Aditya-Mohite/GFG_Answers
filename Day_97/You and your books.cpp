
class Solution 
{
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) 
    {
        long long i = 0;
        long long sum = 0;
        long long currSum = 0;
        while(i < n)
        {
            if(arr[i] > k) 
            {
                currSum=0;
            }
            else
            {
                currSum += arr[i];
            }
            sum = max(sum,currSum);
            i++;
        }
        return sum;
    }
};
