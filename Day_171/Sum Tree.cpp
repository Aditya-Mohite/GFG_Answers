class Solution 
{
  public:
    int solve(Node* root, bool &flag)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(root->right == NULL && root->left == NULL)
        {
            return root->data;
        }
        int ln = solve(root->left, flag);
        int rn = solve(root->right, flag);
        if(ln + rn != root->data)
        {
            flag = false;
        }
        
        return ln + rn + root->data;
    }
    
    bool isSumTree(Node* root) 
    {
        bool flag = true;
        solve(root, flag);
        return flag;
    }
};
