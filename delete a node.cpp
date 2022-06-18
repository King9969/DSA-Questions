    Node* temp=head,*prev =NULL;
    if(x==1){head=temp->next; delete(temp);}
    else{
        while(--x)
        {prev=temp;
        temp = temp->next;}
        prev->next=temp->next; delete(temp);}
        return head;
