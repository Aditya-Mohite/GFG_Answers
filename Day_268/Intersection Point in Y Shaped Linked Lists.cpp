
class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) 
    {
        set<Node*> st;
        while(head1 != NULL)
        {
            st.insert(head1);
            head1 = head1->next;
        }
        
        while(head2 != NULL)
        {
            if(st.count(head2))
            {
                return head2->data;
            }
            else
            {
                st.insert(head2);
            }
            head2 = head2->next;
        }
        return -1;
    }
};
