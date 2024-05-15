
class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) 
    {
         int l=s.length();
         if(s[l-1]=='-')
        {
          return -1;
        }
       for(int i=0;i<l;i++)
       {
           if(s[i]>='a'&&s[i]<='z')
           {
               return -1;
           }
           
       }
       return stoi(s);
    }
};
