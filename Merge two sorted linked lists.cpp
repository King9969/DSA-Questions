Node* sortedMerge(Node* head1, Node* head2){  
    if(head1->data>head2->data)
     swap(head1,head2);
     Node* head=head1;
    while(head1 && head2){
        Node* prev=NULL;
        while(head1&& head1->data<=head2->data){
            prev=head1;
            head1=head1->next;
        }
        prev->next=head2;
        swap(head1,head2);
    }
    return head;
}
