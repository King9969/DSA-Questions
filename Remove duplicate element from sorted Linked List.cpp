Node *removeDuplicates(Node *head)
{
    Node * curr=head;
 while(curr->next!=NULL){
     if(curr->data==curr->next->data&&curr->next!=NULL){
         curr->next=curr->next->next;
     }
    else{curr=curr->next;}
 }return head;
}
