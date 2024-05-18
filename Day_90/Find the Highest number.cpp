
class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // sort(a.begin(), a.end());
        int s = 0;
        int e = a.size()-1;
        int m = s + (e-s)/2;
        int ans = 0;
        
        while(s <= e)
        {
            ans = max(ans, a[m]);
            if(a[m] > a[e])
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
            m = s + (e-s)/2;
        }
        return ans;
    }
};
