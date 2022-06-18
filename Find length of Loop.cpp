int countNodesinLoop(struct Node *head)
{
   Node *slow = head,*fast = head;
   int flag = 0;
   while(fast!=NULL && fast->next!=NULL){
       fast = fast->next->next;
       slow = slow->next;
       if(slow == fast){
           flag = 1;
           break;}}
   if(flag==0) return 0;
   slow = head;
   int count = 0;
   while(slow!=fast){
       slow = slow->next;
       fast = fast->next;}
   while(fast->next!=slow){
       fast = fast->next;
       count++;}
   return count+1;
}
