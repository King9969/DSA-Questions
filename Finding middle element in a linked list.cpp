Node *m=head;
        while(head!=NULL &&head->next!= NULL){
           m= m->next;
           head= head->next->next;
        }return m->data;
