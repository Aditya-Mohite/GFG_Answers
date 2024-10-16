
class Solution {
  public:
    bool checkSorted(vector<int> &arr) 
    {
        int cnt = 0;
        if(arr.size() > 1 && arr[0] > arr[1])
        {
            cnt = 1;
        }
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i] < arr[i-1])
                cnt++;
        }
        if(cnt <=4 && cnt % 2 == 0)
            return true;
        
        return false;
    }
};
