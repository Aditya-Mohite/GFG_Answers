
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr)
    {
        int i = 0;
        int j = i+1;
        while(i <= j && j < n)
        {
            swap(arr[i], arr[j]);
            i = i+2;
            j = j+2;
        }
    }
};

