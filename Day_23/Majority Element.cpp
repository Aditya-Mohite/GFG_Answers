
class Solution
{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        if(size == 0)
        return -1;
        else if(size==1)
        return a[0];
        
        map<int, int> result;
        for(int i=0; i<size; i++)
        {
            result[a[i]]++;
        }
        for(map<int, int>:: iterator itr = result.begin(); itr != result.end(); itr++)
        {
            if(itr -> second > size/2)
            {
                return itr -> first;
            }
        }
        return -1;
    }
};
]
