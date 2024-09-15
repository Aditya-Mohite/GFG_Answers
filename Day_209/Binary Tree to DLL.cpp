
class Solution {
  public:
    void inorder(Node* root, vector<int> &v)
    {
        if(root == NULL)
        {
            return ;
        }
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    Node* bToDLL(Node* root) 
    {
        vector<int> v;
        inorder(root, v);
        
        if(v.empty())
        {
            return NULL;
        }
        
        Node* node = new Node(v[0]);
        Node* curr = node;
        
        for(int i=1; i<v.size(); i++)
        {
            Node* newNode = new Node(v[i]);
            curr->right = newNode;
            newNode->left = curr;
            curr = newNode;
        }
        
        return node;
    }
};
