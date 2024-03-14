
class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n) 
    {
        vector<int> ans;
        
        for(int i=0; i<n; i++)
        {
            int a = abs(arr[i]);
            if(arr[a-1]<0)
            {
                ans.push_back(a);
            }
            else
            arr[a-1] *= -1;
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i] > 0)
            {
                ans.push_back(i+1);
                break;
            }
        }
        return ans;
    }
};
