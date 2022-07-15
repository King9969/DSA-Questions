Node* deleteK(Node *head,int K)
{
    int cnt=0;
   Node* temp=head;
   Node* prev=NULL;
   if(K == 1)return NULL;
   while(temp){
       cnt++;
       if(cnt==K){
           prev->next=temp->next;
           cnt=0;
       }
        prev = temp;
        temp=temp->next;
   }
   return head;
}
