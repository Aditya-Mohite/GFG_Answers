
class Solution {
  public:
    bool ispossible(vector<int> &arr, int k,int mid)
    {
        int n=arr.size();
        int noofstudent=1; 
        int pages=0;    
        
        for(int i=0;i<arr.size();i++)
        {
            if(pages+arr[i]<=mid)   
            {
                pages+=arr[i];      
            }
            else
            {
                noofstudent++; 
                
                if(noofstudent>k || arr[i]>mid) 
                {                              
                    return false;
                }
                
                pages=arr[i];
            }
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) 
    {
        if(arr.size()<k) 
            return -1;
        
        
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        int s=0;   
        int e=sum;  
        int ans=0;  
        while(s<=e) 
        {
            int mid=(s+e)/2;    
            
            if(ispossible(arr,k,mid)) 
            {
                ans=mid; 
                e=mid-1;    
            }
            else
                s=mid+1;    
        }
        return ans;
    }
};
