
class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) 
    {
        Node* head1 = head;
        Node* head2 = head->next;
        Node* cur1 = head1;
        Node* cur2 = head2;
        while (cur1 and cur2) 
        {
            cur1->next = cur2->next;
            cur1 = cur1->next;
            if (cur1) 
            {
                cur2->next = cur1->next;
                cur2 = cur2->next;
            }
        }
        return {head1, head2};
    }
};
