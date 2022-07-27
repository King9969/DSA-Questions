    Node *copyList(Node *head)
    {
       unordered_map<int,Node*> mpc;
       unordered_map<Node*,int> mpo;
       Node *temp = head;
       Node *dummy = new Node(-1);
       Node *curr=dummy;
       int i=1;
       while(temp){
           curr->next = new Node(temp->data);
           curr= curr->next;
           mpc[i]=curr;
           mpo[temp] = i;
           i++;
           temp = temp->next;
       }
       
       temp = head;
       curr = dummy->next;
       while(temp){
       curr->arb = mpc[mpo[temp->arb]];
           temp = temp->next;
           curr = curr->next;
       }
       return dummy->next;
    }
