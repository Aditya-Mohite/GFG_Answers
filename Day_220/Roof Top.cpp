
class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) 
    {
        int cnt = 0;
        int maxi = -1e9;
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i]>arr[i-1])
            {
                cnt++;
                maxi=max(maxi, cnt);
            }
            else 
                cnt=0;
        }
        return maxi;
    }
};
