
class Solution {
  public:
    bool compute(Node* head) 
    {
        string str = "";
        Node* temp = head;
        while(temp != NULL)
        {
            str += temp->data;
            temp = temp->next;
        }
        
        int s = 0;
        int e = str.length()-1;
        while(s < e)
        {
            if(str[s] != str[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
};

