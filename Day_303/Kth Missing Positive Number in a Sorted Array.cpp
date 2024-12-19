
class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) 
    {
        int last = 0;
        for (int& i : arr ) 
        {
            if ( i != last + 1 ) 
            {
                k -= i - last - 1;
                if ( k <= 0 ) 
                    return i + k - 1;
            }
            last = i;
        }
        return last + k;
    }
};
