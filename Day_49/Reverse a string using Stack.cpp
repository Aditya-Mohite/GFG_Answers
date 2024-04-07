
char* reverse(char *S, int len)
{
    stack<int> s1;
    for(int i=0; i<len; i++)
    {
        s1.push(S[i]);
    }
    int i = 0;
    while(!s1.empty())
    {
        S[i++] = s1.top();
        s1.pop();
    }
    return S;
}
