
class Solution
{
  public:
  
    bool isleaf(Node* root)
    {
        // check node is leaf node or not
        if(root->left == NULL && root->right == NULL)
        {
            return true;
        }
        
        return false;
    }
  
    bool hasPathSum(Node *root, int target) 
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int sum = target - root->data;
        
        // If remaining sum is 0 and it's a leaf node then return true
        if(sum == 0 && isleaf(root))
        {
            return true;
        }
        
        bool ans = 0;
        if(root->left)
        {
            ans = ans || hasPathSum(root->left, sum);
        }
        if(root->right)
        {
            ans = ans || hasPathSum(root->right, sum);
        }
        
        return ans;
    }
};
