class Solution 
{
  public:
    void segregate0and1(vector<int> &arr) 
    {
        int s = 0, e = arr.size()-1;
        while(s <= e)
        {
            if(arr[s] == 0)
            {
                s++;
            }
            else if(arr[e] == 1)
            {
                e--;
            }
            else
            {
                swap(arr[s], arr[e]);
            }
        }
    }
};
