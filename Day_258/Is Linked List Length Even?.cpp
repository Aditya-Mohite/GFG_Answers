
class Solution {
  public:
    bool isLengthEven(struct Node **head) 
    {
        int cnt = 0;
        while(*head != NULL)
        {
            cnt++;
            *head = (*head)->next;
        }
        if(cnt % 2 == 0)
            return true;
        else
            return false;
    }
};
