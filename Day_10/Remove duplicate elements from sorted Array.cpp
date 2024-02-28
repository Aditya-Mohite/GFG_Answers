//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n)
    {
        if (n == 0)
        return 0;

        vector<int> v1;
        v1.push_back(a[0]); 
        int i = 1;

        while (i < n) 
        {
            while (i < n && a[i] == a[i - 1])
                i++;
            if (i < n)
                v1.push_back(a[i]);

            i++;
        }
    
        for(int i=0; i<v1.size(); i++)
        {
            a[i]=v1[i];
        }
        
        return v1.size();
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends
