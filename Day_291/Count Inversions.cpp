//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int merge(vector<int> &arr, int l, int mid, int r) 
    {
        int count = 0; 
        int i = l, j = mid + 1, k = 0;
        vector<int> temp(r - l + 1);  
        
        while (i <= mid && j <= r) 
        {
            if (arr[i] <= arr[j]) 
            {
                temp[k++] = arr[i++];
            } 
            else 
            {
                count += (mid - i + 1); 
                temp[k++] = arr[j++];
            }
        }
        
        while (i <= mid) 
        {
            temp[k++] = arr[i++];
        }

        while (j <= r) 
        {
            temp[k++] = arr[j++];
        }

        for (int p = l; p <= r; p++) 
        {
            arr[p] = temp[p - l];
        }

        return count;  
    }

    int mergeSort(vector<int> &arr, int l, int r) 
    {
        if (l >= r) 
            return 0; 
        
        int mid = (l + r) / 2;
        int count = 0;

        count += mergeSort(arr, l, mid);

        count += mergeSort(arr, mid + 1, r);

        count += merge(arr, l, mid, r);

        return count;
    }

    int inversionCount(vector<int> &arr) 
    {
        int n = arr.size();
        return mergeSort(arr, 0, n - 1); 
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
