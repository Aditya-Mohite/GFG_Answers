
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        vector<int> vec(n+1);
        vec[0] = arr[0];
        vec[1] = max(arr[1], arr[0]);
        
        for(int i=2; i<n; i++)
        {
            vec[i] = max(arr[i] + vec[i-2], vec[i-1]);
        }
        
        return vec[n-1];
    }
};
