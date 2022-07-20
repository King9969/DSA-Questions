Node* deleteNode(Node *head_ref, int x)
    {
      Node *temp=head_ref,*pre;
      if(x==1)head_ref=temp->next;
      else{
          for(int i=1;i<x;i++){
              pre=temp;
              temp=temp->next;
          }pre->next=temp->next;
      }return head_ref;
    }
