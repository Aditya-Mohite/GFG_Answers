
class Solution 
{
  public:
    
    bool palindrome(vector<int> &v)
    {
        int n = v.size();
        int s = 0, e = n-1;
        while(s < e)
        {
            if(v[s++] != v[e--])
            {
                return false;
            }
        }
        return true;
    }
    
    string pattern(vector<vector<int>> &arr) 
    {
        int row = arr.size();

        
        if(row == 1)
        {
            return "0 R";
        }
        
        int cnt = -1;
        
        // for rows
        for(int i=0; i<row; i++)
        {
            if(palindrome(arr[i]))
            {
                cnt = i;
                break;
            }
        }
        
        if(cnt>=0)
        {
            return to_string(cnt)+" R";
        }
        
        // for columns
        for(int i=0; i<row; i++)
        {
            bool flg = false;
            int k = 0, j = row-1;
            while(k < j)
            {
                if(arr[k][i] != arr[j][i])
                {
                    flg = true;
                    break;
                }
                k++;
                j--;
            }
            if(flg == false)
            {
                return to_string(i) + " C";
            }
        }
        return "-1";
    }
};
