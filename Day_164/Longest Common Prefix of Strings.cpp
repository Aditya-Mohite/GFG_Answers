class Solution {
  public:
   
    string longestCommonPrefix(vector<string> arr) 
    {
        sort(arr.begin(), arr.end());
        
        int n = arr[0].size();
        string str = arr[0];
        
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[i][j] != str[j])
                {
                    n = j;
                }
            }
        }
        if(n == 0)
        {
            return "-1";
        }
        else
        return str.substr(0, n);
    }
};
