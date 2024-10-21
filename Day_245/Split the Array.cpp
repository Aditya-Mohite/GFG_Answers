
class Solution {
  public:
    int countgroup(vector<int>& arr) 
    {
        int x = 0;
        for(auto i: arr)
            x ^= i;
        
        if(x == 0)
            return (1 << (arr.size()-1)) - 1;
        else
            return 0;
    }
};
