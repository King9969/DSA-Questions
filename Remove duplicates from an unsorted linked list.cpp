    Node * removeDuplicates( Node *head) 
    {
     set<int>s;
     int size=0;
     Node* prev=NULL;
     Node* curr=head;
     while(curr!=NULL){
         size=s.size();
         s.insert(curr->data);
         if(s.size()==size)prev->next=curr->next; 
         else prev=curr;
         curr=curr->next;}
     return head;
    }
