//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    vector<int> duplicates(long long arr[], int n) 
    {
        unordered_map<long,long>m1;
        vector<int>ans;
 
        for(int i=0;i<n;i++){
            m1[arr[i]]++;
        }
        
        for(auto a: m1){
            if(a.second>1)
                ans.push_back(a.first);
        }
        if(ans.empty()) return {-1};
        sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
