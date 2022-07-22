int sumOfLastN_Nodes(struct Node* head, int n)
{
     Node* temp=head;
     int ts=0,cs=0,m=0;
     while(temp){
         ts+=temp->data;
         m++;
         temp=temp->next;
     }
     int x=m-n;
     while(x--){
         cs+=head->data;
         head=head->next;
     }
     return ts-cs;
}
