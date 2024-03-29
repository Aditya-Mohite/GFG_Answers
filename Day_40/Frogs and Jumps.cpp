
class Solution 
{
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) 
    {
        unordered_set<int>s;
        for(int i=0;i<N;i++)
        {
            int key=frogs[i];
            int key1=frogs[i];
            if(s.find(key)==s.end())
            {
                while(key<=leaves)
                {
                    s.insert(key);
                    key=key+key1;
                }
            }
        }
        return (leaves-s.size());
    }
};
