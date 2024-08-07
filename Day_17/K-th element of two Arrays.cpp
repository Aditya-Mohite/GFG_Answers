
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) 
    {
        int ans=-1;
        int i=0,j=0;
        
        while(i<arr1.size() && j<arr2.size() && k)
        {
            
            if(arr1[i]<=arr2[j])
            {
                ans=arr1[i];
                i++;
                
            }
            else
            {
                ans=arr2[j];
                j++;
                
            }
            k--;
        }
        
        while(i<arr1.size() && k)
        {
            ans=arr1[i];
            i++;k--;
        }
        
        while(j<arr2.size() && k)
        {
            ans=arr2[j];
            j++;k--;
        }
        
        return ans;
    }
};
