
class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) 
    {
        int ans = 0, i = 0, j = 0;
        int s1 = 0, s2 = 0;
        
        while(i < arr1.size() && j < arr2.size())
        {
            if(arr1[i] < arr2[j])
            {
                s1 += arr1[i];
                i++;
            }
            else if(arr1[i] > arr2[j])
            {
                s2 += arr2[j];
                j++;
            }
            else if(arr1[i] == arr2[j])
            {
                ans += max(s1, s2) + arr1[i];
                i++;
                j++;
                s1 = 0;
                s2 = 0;
            }
        }
        
        while(i < arr1.size())
        {
            s1 += arr1[i];
            i++;
        }
        while(j < arr2.size())
        {
            s2 += arr2[j];
            j++;
        }
        ans += max(s1, s2);
        
        return ans;
    }
};
