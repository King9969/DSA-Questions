    Node *reverse(Node *head) {
       Node *temp = head, *prev = NULL, *next;
       while(temp != NULL) {
           next = temp -> next;
           temp -> next = prev;
           prev = temp;
           temp = next;
       }
       return prev;
   }
    Node *compute(Node *head)
    { 
        head=reverse(head);
       Node *l=head;
       while(l&&l->next){
           Node *n=l->next;
           if(l->data>n->data){
                l->next=n->next;
           }
           else l=l->next;
       }head=reverse(head);
       return head;
    }
