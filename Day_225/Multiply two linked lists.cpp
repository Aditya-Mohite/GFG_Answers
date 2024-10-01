
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) 
    {
        string s1 = "";
        string s2 = "";
        Node* f = first;
        Node* s = second;
        while(f != NULL)
        {
            s1 += to_string(f->data);
            f = f->next;
        }
        while(s != NULL)
        {
            s2 += to_string(s->data);
            s = s->next;
        }
        long long ans = (stoll(s1) * stoll(s2)) % 1000000007;
        
        return ans;
    }
};
