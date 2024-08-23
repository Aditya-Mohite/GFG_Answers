
//Function to return a list containing elements of left view of the binary tree.
void traverse(Node* root, vector<int> &ans, int level)
{
    if(root == NULL)
    {
        return ;
    }
    
    if(level == ans.size())
    {
        ans.push_back(root->data);
    }
    
    traverse(root->left, ans, level+1);
    traverse(root->right, ans, level+1);
}

vector<int> leftView(Node *root)
{
   vector<int> ans;
   
   traverse(root, ans, 0);
   return ans;
}
