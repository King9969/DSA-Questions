Node* deleteMid(Node* head)
{
   Node* slow=head,*fast=head,*p=slow;
   while(fast&&fast->next){
       p=slow;
       slow=slow->next;
       fast=fast->next->next;
   }
   p->next=slow->next;
   return head;
}
