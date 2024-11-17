
class Solution {
  public:
    void reverseArray(vector<int> &arr) 
    {
        int s = 0, e = arr.size()-1;
        while(s < e)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
};
