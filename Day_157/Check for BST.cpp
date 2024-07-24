
class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    vector<int> solve(Node* &root, vector<int> &v)
    {
        if(root == NULL)
        {
            return v;
        }
        solve(root->left, v);
        v.push_back(root->data);
        solve(root->right, v);
        
        return v;
    }
    static bool sorting(int &a, int &b)
    {
        return a <= b;
    }
    bool isBST(Node* root) 
    {
        vector<int> v;
        v = solve(root, v);
        if(is_sorted(v.begin(), v.end(), sorting))
        {
            return true;
        }
        else
            return false;
    }
};
