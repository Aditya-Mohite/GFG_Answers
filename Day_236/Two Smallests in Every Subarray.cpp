
class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) 
    {
         if(arr.size() == 1)
            return -1;
            
        int maxi = 0;
        for(int i=0; i<arr.size()-1; i++)
        {
            int sum = arr[i]+arr[i+1];
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};