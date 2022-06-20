int intersectPoint(Node* head1, Node* head2)
{
   int ac=0,bc=0;
   Node *a=head1;
   Node *b=head2;
   while(a){
       ac++;
       a=a->next;}
   while(b){
       bc++;
       b=b->next;}
       int d=abs(ac-bc);
      if(ac>bc)for(int i=0; i<d; i++)head1=head1->next;
      else for(int i=0; i<d; i++)head2=head2->next;

      while(head1&&head2){
          if(head1==head2)return head1->data;
          head1=head1->next;
          head2=head2->next;
      }return -1;
}
