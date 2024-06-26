
class Solution {
  public:
    void convert(Node *head, TreeNode *&root) 
    {
        if(head==NULL)
        {
            root=NULL;
            return;
        }
        
        queue<TreeNode*>q;
        
        root = new TreeNode(head->data);
        q.push(root);
        
        head=head->next;
        
        while(head)
        {
            TreeNode* par=q.front();
            q.pop();
            
            TreeNode *lft=NULL, *rgt=NULL;
            
            lft=new TreeNode(head->data);
            head=head->next;
            q.push(lft);
            if(head)
            {
                rgt=new TreeNode(head->data);
                head=head->next;
                q.push(rgt);
            }
            par->left=lft;
            par->right=rgt;
        }
        return;
    }
};
