
class Solution 
{
  public:
    int maxi = 0;
    int mini = 0;
    void solve(Node* root,int dist)
    {
        if(root==NULL)
            return;
            
        maxi=max(maxi,dist);
        mini=min(mini,dist);
        solve(root->left,dist-1);
        solve(root->right,dist+1);
    }
    
    int verticalWidth(Node* root) 
    {

        if(root==NULL)
            return 0;
            
        solve(root,0);
        return maxi-mini+1;  
    }
};
