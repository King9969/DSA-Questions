    Node *insertAtBegining(Node *head, int x) {
      Node* node=new Node(x);
        node->next=head;
        head=node;
        return head;
    }
    Node *insertAtEnd(Node *head, int x)  {
       Node* node=new Node(x);
        if(head==NULL){
            head=node;
            return head;}
        else{   
        Node* n=head;
        while(n->next!=NULL){
              n=n->next;}
            n->next=node;
            return head;
        }
