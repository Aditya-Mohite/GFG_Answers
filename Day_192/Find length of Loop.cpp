
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) 
    {
        int val=0;
        map<Node*,int>mp;
        Node* curr=head;
        while(curr!=NULL)
        {
           if(mp.find(curr) != mp.end())
           {
               return abs(mp[curr]-(val++));
           }
           mp[curr] = val++;
           curr = curr->next;
        }
        return 0;
    }
};
