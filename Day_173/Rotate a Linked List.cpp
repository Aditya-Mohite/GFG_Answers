class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) 
    {
        Node* end = head;
        int cnt =0;
        while(end->next != NULL)
        {
            cnt++;
            end = end->next;
        }
        cnt++;
        if(cnt == k)
        {
            return head;
        }
        Node* start = head;
        k--;
        while(k--)
        {
            start=start->next;
        }
        Node* newNode = start->next;
        start->next = NULL;
        end->next = head;
        
        return newNode;
    }
};
