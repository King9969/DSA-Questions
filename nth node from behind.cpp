 Node *l=head;
    for(int i=0;i<n;i++){l=l->next;if(l==NULL&&i!=n-1)return -1;}
    while(l!=NULL){
        head=head->next;
        l=l->next;
    }return head->data;
