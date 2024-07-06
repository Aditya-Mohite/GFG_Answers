
class Solution {
  public:

    Node* temp = NULL;
    void populateNext(Node *root) 
    {
        
        if(root == NULL)
        {
            return ;
        }
        populateNext(root->left);
        if(temp != NULL)
        {
            temp->next = root;
        }
        temp = root;
        populateNext(root->right);
    }
};
