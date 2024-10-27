
class Solution {
  public:
    bool findTriplet(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        for(int i = arr.size()-1; i>=2;i--)
        {
            int j = 0, k=i-1;
            while(j<k)
            {
                int sum = arr[j]+arr[k];
                if(sum == arr[i])
                    return true;
                else if(sum > arr[i])
                    k--;
                else if (sum < arr[i])
                    j++;
            }
        }
        return false;
    }
};
