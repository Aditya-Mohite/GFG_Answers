
class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) 
    {
        Node* prev = NULL;
        Node* temp = head;
        
        while(temp != NULL && temp->next != NULL)
        {
            if(temp->data != temp->next->data)
            {
                prev = temp;
                temp = temp->next;
                continue;
            }
            
            while(temp->next != NULL && temp->data == temp->next->data)
            {
                Node* del = temp->next;
                temp->next = temp->next->next;
                delete del;
            }
            Node* del = temp;
            
            if(temp == head)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }
            
            temp = temp->next;
            delete del;
        }
        
        return head;
    }
};
