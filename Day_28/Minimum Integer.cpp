
class Solution 
{
  public:
    int minimumInteger(int N, vector<int> &A) 
    {
        int num = INT_MAX;
        long long int sum = 0;
        for(int i=0; i<N; i++)
        {
            sum += A[i];
        }
        for(int i=0; i<N; i++)
        {
            if((long long int)N*A[i] >= sum)
            {
                num = min(num, A[i]);
            }
        }
        return num;
    }
};
