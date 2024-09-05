
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) 
    {
        int s = (n*(n+1))/2;
        int a = accumulate(arr.begin(), arr.end(), 0);
        
        return (s - a);
    }
};
