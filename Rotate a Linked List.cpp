if(head==NULL || head->next==NULL)
        return head;
        Node *l=head;
      while(l->next!=NULL){l=l->next;}
      l->next = head;
      int c=1;
      Node *prev=head;
      Node *ans;
      while(c!=k){
          c++;
          prev=prev->next;
    }ans=prev->next;prev->next=NULL;return ans;
