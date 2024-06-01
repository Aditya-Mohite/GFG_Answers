class Solution {
  public:
    string oddEven(string s) 
    {
        vector <int> vec(26);
        for(auto i:s) vec[i-'a']++;
      
        int c = 0;
        for(int i=0;i<26;i++) {
            if(vec[i]>0) {
                int k = i+1;
                int m = vec[i];
                if(k%2 == m%2) c++;
            }
        }
        if(c&1) return "ODD";
        return "EVEN";
    }
};
