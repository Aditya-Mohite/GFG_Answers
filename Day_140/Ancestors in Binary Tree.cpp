
class Solution {
  public:
    
    void solution(struct Node *root, int &target, bool &k, vector<int> &v)
    {
        if(root == NULL || k == true)
        {
            return ;
        }
        
        if(k == false)
        {
            solution(root->left, target, k, v);
            solution(root->right, target, k, v);
        }
        
        if(k == true)
        {
            v.push_back(root->data);
        }
        if(target == root->data)
        {
            k = true;
        }
    }
    
    vector<int> Ancestors(struct Node *root, int target) 
    {
        vector<int> ans;
        bool k = false;
        solution(root, target, k, ans);
        return ans;
    }
};
