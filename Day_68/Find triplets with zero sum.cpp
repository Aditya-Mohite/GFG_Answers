
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr, arr+n);
        for(int i=0; i < n; i++) {
            int l = i+1;
            int r = n-1;
            
            while(l<r) 
            {
                if(arr[i] + arr[l] + arr[r] == 0) 
                {
                    return true;
                } else if(arr[i] + arr[l] + arr[r] < 0) 
                {
                    l++;
                } 
                else 
                {
                    r--;
                }
            }
        }
        
        return false;
    }
};
