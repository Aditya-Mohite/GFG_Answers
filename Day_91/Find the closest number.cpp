
class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        vector<pair<int,int>> vec;
        int mn = INT_MAX ;
        for(int i=0;i<n;i++)
        {
            vec.push_back({abs(arr[i]-k) , arr[i]}) ;
            mn = min(mn , abs(arr[i]-k)) ;
        }
        int ans = 0 ;
        for(int i=0;i<vec.size();i++)
            if(vec[i].first == mn)
                ans = max(ans , vec[i].second) ;
        return ans ;
    } 
};
