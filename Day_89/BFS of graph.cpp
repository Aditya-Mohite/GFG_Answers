
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int> vis(V , 0);
       vector<int> ans;
       queue<int> q;
       q.push(0);
       while(!q.empty()){
           int a = q.front();
           q.pop();
           if(vis[a]==1) continue;
           else{
               vis[a] =1;
               ans.push_back(a);
               for(auto it: adj[a]){
                   q.push(it);
                }
           }
       }
       return ans;
    }
};
