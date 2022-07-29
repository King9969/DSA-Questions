void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    if(!head)return;
    if(!head->next)return;
    Node* slow=head,*fast=head;
    while(fast->next!=head &&fast->next->next!=head){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast->next==head)fast->next=slow->next;
    else fast->next->next=slow->next;
    *head1_ref=head;
    *head2_ref=slow->next;
    slow->next=head;
}
