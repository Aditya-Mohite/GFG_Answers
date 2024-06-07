
class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) 
    {
        int a[maxx+1] = {0};
        int i = 0;
        while(i < n)
        {
            a[l[i]] += 1;
            a[r[i]+1] -= 1;
            i++;
        }
        
        int b[maxx+1] = {0};
        b[0] = a[0];
        
        for(int j=1; j<maxx+1; j++)
        {
            b[j] = b[j-1]+a[j];
        }
        int ans = 0;
        for(int j=0; j<maxx+1; j++)
        {
            if(b[ans] < b[j])
            {
                ans = j;
            }
        }
        return ans;
    }
};
