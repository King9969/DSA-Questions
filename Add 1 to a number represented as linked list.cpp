 Node* rev(Node *head){
        Node* curr=head;
        Node*prev =NULL;
        Node*nxt=NULL;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;}
            return prev;
    }
    
    Node* addOne(Node *head){
        Node *newhead=rev(head);
        Node *temp=newhead;
        while(temp){
            temp->data=(temp->data+1)%10;
            if(temp->data)break;
            temp=temp->next;}
            if(not temp){
            temp = new Node(1);
            head->next = temp;}
            return rev(newhead);
            
    }
