void deleteAlt(struct Node *head){
    if(!head||!head->next)return;
    Node*pre=head;
    while(pre){
        if(!pre->next)break;
        pre->next=pre->next->next;
        pre=pre->next;
    }
}
