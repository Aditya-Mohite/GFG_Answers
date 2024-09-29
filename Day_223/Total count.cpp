
class Solution {
  public:
    int totalCount(int k, vector<int>& arr) 
    {
        int count = 0;
        for(int i=0; i<arr.size(); i++)
        {
            int ele = arr[i];
            while(ele > 0)
            {
                count++;
                ele -= k;
            }
        }
        return count;
    }
};
