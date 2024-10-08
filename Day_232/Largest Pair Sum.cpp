
class Solution {
  public:
    int pairsum(vector<int> &arr) 
    {
        int fm = INT_MIN, sm = INT_MIN;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] > fm)
            {
                sm = fm;
                fm = arr[i];
            }
            else if(arr[i] > sm)
            {
                sm = arr[i];
            }
        }
        return sm + fm;
    }
};
