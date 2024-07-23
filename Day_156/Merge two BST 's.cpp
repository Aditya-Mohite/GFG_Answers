
class Solution 
{
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void solve(Node* root, multiset<int> &st)
    {
        if(root == NULL)
        {
            return ;
        }
        st.insert(root->data);
        solve(root->left, st);
        solve(root->right, st);
    }
    
    vector<int> merge(Node *root1, Node *root2) 
    {
        vector<int> ans;
        multiset<int> st;
        solve(root1, st);
        solve(root2, st);
        
        for(auto i=st.begin(); i!=st.end(); i++)
        {
            ans.push_back(*i);
        }
        
        return ans;
    }
};
