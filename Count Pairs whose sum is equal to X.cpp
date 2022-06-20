    int countPairs(struct Node* head1, struct Node* head2, int x) {
       unordered_map<int,int>m;
       while(head1){
           m[head1->data]++;
           head1=head1->next;
       }
       int c=0;
       while(head2){
           if(m[x-(head2->data)])c++;
           head2=head2->next;
       }
       return c;
    }
