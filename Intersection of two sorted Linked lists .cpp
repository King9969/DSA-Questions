Node* findIntersection(Node* head1, Node* head2)
{
    Node* res=NULL,*curr=NULL,*temp=NULL;
    while(head1&&head2){
        if(head1->data==head2->data){
            temp= new Node(head1->data);
            if(!res)res=temp;
            else curr->next =temp;
            curr=temp;
            head1=head1->next;
            head2=head2->next;
        }
        else if(head1->data>head2->data)head2=head2->next;
        else  head1=head1->next;
    }return res;
}
