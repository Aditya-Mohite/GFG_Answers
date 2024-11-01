
class Solution {
  public:
    long long maxSum(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        int s = 0, e = arr.size()-1;
        long long sum = 0;
        while(s < e)
        {
            sum += abs(arr[e] - arr[s]);
            sum += abs(arr[e] - arr[s+1]);
            s++;
            e--;
        }
        sum += abs(arr[0] - arr[s]);
        return sum;
    }
};
