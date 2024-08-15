class Solution {
  public:
    Node* reverseList(Node* root)
    {
        if(root == NULL || root->next == NULL)
        {
            return root;
        }
 
        Node* temp = root;
        Node* prev = NULL;
        while(temp != NULL)
        {
            Node* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;

        }
        return prev;
    }
    
    Node* addOne(Node* head) 
    {
        head = reverseList(head);
        Node* curr = head;
        Node* prev = NULL;
        int carry = 1;
        while(curr != NULL && carry)
        {
            int num = curr->data + carry;
            curr->data = num%10;
            carry = num/10;
            prev = curr;
            curr = curr->next;
        }
        if(carry)
        {
            prev->next = new Node(carry);
        }
        return reverseList(head);
        
    }
};
