
class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        int mid = (high+low)/2;
        while(low < high)
        {
            if(arr[mid] < arr[high])
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
            mid = (high+low)/2;
        }
        return arr[low];
    }
};
