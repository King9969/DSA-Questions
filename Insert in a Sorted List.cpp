    Node *sortedInsert(struct Node* head, int data) {
       Node* newn=new Node(data);
       if(head->data>data){
           newn->next=head;
           return newn;
       }
       Node* p=head,*t=head;
       while(p){
           if(p->data>data){
               newn->next=p;
               t->next=newn;
               return head;
           }
           t=p;
           p=p->next;
       }t->next=newn;
    return head;
    }
