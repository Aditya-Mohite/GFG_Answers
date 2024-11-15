
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) 
    {
        int f=-1;
        int s=-1;
        for(int a:arr)
        {
            if(a>f)
            {
                s=f;
                f=a;
            }
            if(a>s && a<f && s<f)
            {
                s=a;
            }
        }
        
        if(f==s)
            return -1;
            
        return s;
    }
};
