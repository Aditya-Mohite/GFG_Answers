
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) 
    {
        Node *n = new Node;
        n->data = x;
        n->prev = NULL;
        n->next = NULL;
        bool flag = false;
        
        
        if(x < head->data)
        {
            head->prev = n;
            n->next = head;
            head = n;
            flag = true;
        }
        
        Node *temp = head;
        
        while(temp->next!=NULL)
        {
            if(temp->data<=x && (temp->next)->data>x && !flag)
            {
                flag = true;
                n->next = temp->next;
                temp->next = n;
                n->prev = temp;
                temp->next->prev = n;
            }
            temp = temp->next;
        }
        
        if(!flag)
        {
            temp->next = n;
            n->prev = temp;
        }
        return head;
    }
};
