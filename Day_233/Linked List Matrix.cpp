
class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) 
    {
        Node* temp1 = new Node(0);
        Node* thead = temp1;
        for(int i=0; i<mat.size(); i++)\
        {
            Node* temp2 = new Node(0);
            temp1->right = temp2;
            temp1 = temp2;
        }
        
        Node* ptr = thead;
        for(int i=0; i<mat.size(); i++)
        {
            Node* rh = new Node(mat[i][0]);
            Node* temp3 = rh;
            ptr->down = temp3;
            ptr = ptr->right;
            
            for(int j=1; j<mat.size(); j++)\
            {
                Node* temp4 = new Node(mat[i][j]);
                temp3->right = temp4;
                temp3 = temp4;
                ptr->down = temp4;
                ptr = ptr->right;
            }
            ptr = rh;
        }
        return thead->down;
    }
};
