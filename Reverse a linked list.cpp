struct Node *forward=NULL;
   struct Node *curr=head;
   struct Node *prev=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }return prev;
