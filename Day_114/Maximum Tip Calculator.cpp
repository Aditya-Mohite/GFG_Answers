class Solution 
{
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) 
    {
        vector<pair<int,int>>temp;
        for(int i=0;i<n;i++)
        {
            temp.push_back({abs(arr[i]-brr[i]),i});
        }
        sort(temp.begin(),temp.end());
        
        long long ans=0;
            for(int i=n-1;i>=0;i--)
            {
                int index=temp[i].second;
                if(arr[index]>brr[index])
                {
                    if(x!=0)
                    {
                        ans+=arr[index];
                        x--;
                    }
                    else
                    {
                        ans+=brr[index];
                        y--;
                    }
                    
                }
                else
                {
                    if(y!=0)
                    {
                        ans+=brr[index];
                        y--;
                    }
                    else
                    {
                        ans+=arr[index];
                        x--;
                    }
                }
            }
        return ans;
    }
};
