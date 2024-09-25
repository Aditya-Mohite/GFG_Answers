
class Solution {
  public:
  
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) 
    {
        stack<int> st;
        if(head == NULL || head->next == NULL)
        {
            return true;
        }
        
        Node* temp = head;
        while(temp)
        {
            st.push(temp->data);
            temp = temp->next;
        }
        temp = head;
        
        while(temp)
        {
            if(temp->data != st.top())
                return false;
                
            st.pop();
            temp = temp->next;
        }
        return true;
        
    }
};

