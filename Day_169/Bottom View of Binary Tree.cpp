class Solution 
{
  public:
    vector <int> bottomView(Node *root) 
    {
        vector<int> ans;
        if(root == NULL)
        {
            return ans;
        }
        
        map<int, int> mp;   // map<hori_distance, node value>
        queue<pair<Node*, int>> q;
        q.push(make_pair(root, 0));
        
        while(!q.empty())
        {
            pair<Node*, int> p = q.front();
            q.pop();
            
            Node* node = p.first;
            int hd = p.second;
            
            // put in map, automatically replaces old value
            mp[hd] = node->data;
            
            if(node->left)
            {
                q.push(make_pair(node->left, hd-1));
            }
            if(node->right)
            {
                q.push(make_pair(node->right, hd+1));
            }
        }
        
        for(auto i: mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
