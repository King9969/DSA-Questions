    Node* segregate(Node *head) {
        int a=0,b=0,c=0;
        Node *temp=head;
        while(temp!=NULL){
            if(temp->data==0)a++;
            if(temp->data==1)b++;
             if(temp->data==2)c++;
            temp=temp->next;
        }
             temp=head;
             while(a--){
            temp->data = 0;
            temp = temp->next;}
            while(b--){
            temp->data = 1;
            temp = temp->next;}
            while(c--){
            temp->data = 2;
            temp = temp->next;}
            
        return head;
    }
