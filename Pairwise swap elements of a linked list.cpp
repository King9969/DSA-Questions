Node* pairWiseSwap(struct Node* head) {  
    struct Node *prev=NULL,*cur=head,*nxt;
    int count=0;
    while(cur&&count<2){
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
        count++;
    }
    if(nxt)
    head->next=pairWiseSwap(nxt);
    return prev;
    }
