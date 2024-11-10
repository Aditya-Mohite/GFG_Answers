class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) 
    {
        vector<int> v;
        for(int i=0;i<b.size();i++)
        {
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end());
        for(int j=0;j<a.size();j++)
        {
            if(a[j]!=a[j+1])
            {
                v.push_back(a[j]);
            }
        }
        return v;
    }
};
