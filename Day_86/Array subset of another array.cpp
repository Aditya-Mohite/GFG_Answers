
string isSubset(int a1[], int a2[], int n, int m) 
{
    if(n<m) 
    {
        return "No";
    }
    sort(a1,a1+n);
    sort(a2,a2+m);
    int flag=0;
    for(int i=0;i<n;i++) 
    {
        if(a1[i]==a2[flag]) 
        {
            flag+=1;
        }
        if(flag==m) 
        {
            return "Yes";
        }
    }
    return "No";
}
