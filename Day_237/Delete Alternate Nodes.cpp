
class Solution {
  public:
    void deleteAlt(struct Node *head) 
    {
        Node* temp = head;

        while(temp != NULL && temp->next != NULL)
        {
            temp->next = temp->next->next;
            temp = temp->next;
        }
    }
};
