
class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) 
    {
        int n = parent.size();
        if(n == 0)
        {
            return NULL;
        }
        
        vector<Node*> v;
        int index = 0;
        for(int i=0; i<n; i++)
        {
            v.push_back(new Node(i));
            
            if(parent[i] == -1)
            {
                index = i;
            }
        }
        
        Node* root = v[index];
        
        for(int i=0; i<n; i++)
        {
            if(parent[i] == -1)
            {
                continue;
            }
            
            if(v[parent[i]]->left == NULL)
                v[parent[i]]->left = v[i];
            else
                v[parent[i]]->right = v[i];
        }
        
        return root;
    }
};
