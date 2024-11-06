
class Solution {
  public:
    void fun(vector<int>& v, int curr, Node* node)
    {
        curr = curr * 10 + node->data;
        if(node->left == nullptr && node->right == nullptr)
        {
            v.push_back(curr);
        }
        else
        {
            if(node->left)
            {
                fun(v, curr, node->left);
            }
            if(node->right)
            {
                fun(v, curr, node->right);
            }
        }
        curr = curr / 10;
    }
    int treePathsSum(Node *root) 
    {
        vector<int> v;
        fun(v, 0, root);
        int ans = 0;
        for(auto it : v)
        {
            ans += it;
        }
        return ans;
    }
};
