
class Solution 
{
  public:
    Node *RemoveHalfNodes(Node *root) 
    {
        if(root == NULL)
        {
            return NULL;
        }
        
        root->left = RemoveHalfNodes(root->left);
        root->right = RemoveHalfNodes(root->right);
        
        if(root->left != NULL && root->right == NULL)
        {
            Node* node = root->left;
            root->left = NULL;
            return node;
        }
        else if(root->left == NULL && root->right != NULL)
        {
            Node* node = root->right;
            root->right = NULL;
            return node;
        }
        
        return root;
    }
};
