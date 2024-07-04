
class Solution {
  public:
  
    string res(Node *root, vector<Node*> &ans, unordered_map<string,int> &mp)
    {
        string temp = "";
        if(root == NULL)
            return "#";
        
        temp += to_string(root->data);
        temp += res(root->left,ans,mp);
        temp += res(root->right,ans,mp);
        
        if(mp[temp] == 1)
            ans.push_back(root);
        
        mp[temp]++;
        
        return temp;
        
    }
    
    vector<Node*> printAllDups(Node* root) 
    {
        vector<Node*> ans;
        unordered_map<string,int> mp;
        res(root,ans,mp);
        return ans;
    }
};
