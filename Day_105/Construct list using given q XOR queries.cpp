
class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) 
    {
        vector<int> arr;
        arr.push_back(0);
        vector<int> xo;
        xo.push_back(0);
        
        for(auto it:queries)
        {
            if(it[0] == 0)
            {
                arr.push_back(it[1]);
                xo.push_back(0);
            }
            else
            {
                xo[0] = xo[0]^it[1];
                if(xo.size() == arr.size())xo.push_back(0);
                xo[xo.size()-1] = xo[xo.size()-1]^it[1];
            }
        }
        int no = 0;
        for(int i=0; i<arr.size(); i++)
        {
            no = no^xo[i];
            arr[i] = arr[i]^no;
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};
