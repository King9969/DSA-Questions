Node* sortedMerge(Node* head1, Node* head2){  
    Node* a=new Node(-1);
    Node* tail=a;
    while(head1 && head2){
        if(head1->data<head2->data){
            tail->next=head1;
            head1=head1->next;}
        else{
            tail->next=head2;
            head2=head2->next;} 
        tail=tail->next;
    }
    if(head1)tail->next=head1;
    else if(head2)tail->next=head2;
    
    return a->next;
}  
