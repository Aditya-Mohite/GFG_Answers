
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) 
    {
        set<int>st ;
        int n = arr.size() ;
        
        for(int i=0;i<n;i++){
            if(arr[i] > 0){
                st.insert(arr[i]) ;
            }    
        }
        
        if(st.size() == 0){
            return 1 ;
        }
        
        for(int i=1 ; i<=1e5 ; i++){
            if(st.find(i) == st.end()){
                return i ;
            }
        }
    }
};
