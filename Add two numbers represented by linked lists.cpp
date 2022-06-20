 Node* rev(Node *&head){
        Node* curr=head;
        Node*prev =NULL;
        while(curr){
          Node* nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;}
            return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {   Node* curr = new Node(0); Node* dummy = curr;
        int cf=0;
        Node* l1 = rev(first);
        Node* l2 = rev(second);
        
        while(l1 or l2 or cf){
            cf += l1?(l1->data):0;
            cf += l2?(l2->data):0;
            
            curr->next = new Node(cf%10);
            cf /= 10;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            curr = curr->next;
        }
        return rev(dummy->next);
    }
