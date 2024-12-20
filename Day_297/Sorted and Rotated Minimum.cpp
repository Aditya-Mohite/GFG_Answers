
class Solution {
  public:
    int findMin(vector<int>& arr) 
    {
        int n = arr.size();
        if(n == 1)
        {
            return arr[0];
        }
        for(int i = 0; i < n; i++)
        {
            if(arr[(i-1+n)%n] > arr[i] && arr[i] < arr[(i+1)%n])
            {
                return arr[i];
            }
        }
        return -1;
    }
};
