
int* game_with_number(int arr[], int n)
{
    int a = arr[n-1];
    for(int i=0; i<n-1; i++)
    {
        arr[i] = arr[i] | arr[i+1];
    } 
    arr[n-1] = a;
    return arr;
}
