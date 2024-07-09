
class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target)
    {
        int sum = INT_MIN;
        int mini= INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size()-2; i++)
        {
            int s = i+1;
            int e = arr.size()-1;
            while(s < e)
            {
                int add = arr[i]+arr[s]+arr[e];
                
                // same as targert
                if(add == target)
                {
                    return add;
                }
                
                if(abs(add - target) < mini)
                {
                    sum = add;
                    mini = abs(add - target);
                }
                else if(abs(add-target) == mini)
                {
                    sum = max(sum, add);
                }
                
                if(add < target)
                {
                    s++;
                }
                else
                    e--;
            }
        }
        
        return sum;
    }
};

