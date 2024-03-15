
int findElement(int arr[], int n) 
{
    
    for(int i=1; i<n-1; i++)
    {
        int l = 0, r = n-1,  flag = 1;
        while(l < i || r > i)
        {
            if(arr[l] > arr[i] && l < i)
            {
                flag = 0;
                break;
            }
            if(arr[r] < arr[i] && r > i)
            {
                flag = 0;
                break;
            }
            l++;
            r--;
        }
        if(flag == 1)
        return arr[i];
    }
    return -1;
}
