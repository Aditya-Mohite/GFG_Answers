
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        vector<pair<int, int>> v;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v.empty() || v.back().first>a[i])
            {
                v.push_back({a[i], i});
            }
            else
            {
                int low = 0, high = v.size()-1;
                int curr_pos=-1;
                while(low<=high)
                {
                    int mid = (low + high)/2;
                    
                    if(v[mid].first<=a[i])
                    {
                        curr_pos = mid;
                        high = mid-1;
                    }
                    else low = mid+1;
                }
                if(curr_pos!=-1)
                {
                    ans =max(ans, i-v[curr_pos].second);
                }
            }
        }
        return ans;
    }
};
