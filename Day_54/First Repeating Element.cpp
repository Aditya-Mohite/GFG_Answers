
class Solution 
{
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) 
    {
        int a[1000000] = {0};
        for(long int i=0; i<n; i++)
        {
            a[arr[i]]++;
        }
        for(long int i=0; i<n; i++)
        {
            if(a[arr[i]] > 1)
            return i+1;
        }
        return -1;
    }
};
