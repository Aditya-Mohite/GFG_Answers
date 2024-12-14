
class Solution {
  public:
    int search(vector<int>& arr, int key) 
    {
        int n = arr.size();
        int lo = 0,hi = n-1;
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            
            if(arr[mid]==key) 
                return mid;
            if(arr[lo]<=arr[mid])
            {  
                if(key >= arr[lo] && key < arr[mid]) 
                    hi = mid-1;  
                else 
                    lo = mid+1; 
            }
            
            else 
            { 
                if(key <= arr[hi] && key > arr[mid]) 
                    lo = mid+1;
                else 
                    hi = mid-1;  
            }
        }
        return -1;
    }
};
