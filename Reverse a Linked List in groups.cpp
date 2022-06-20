    struct node *reverse (struct node *head, int k){ 
    node *prev=NULL,*cur=head,*nxt;
    int count=0;
    while(cur&&count<k){
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
        count++;
    }
    if(nxt)
    head->next=reverse(nxt,k);
    return prev;
    }
