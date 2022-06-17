    Node* findmid(Node* head)
   { Node* slow=head,*fast=head;
       while(fast && fast->next)
       {slow=slow->next;
           fast=fast->next->next;}
       return slow; }
       
   Node* reverse(Node* ptr)
   {Node *prev=ptr,*curr=ptr->next;
       while(curr!=NULL)
       {Node *temp=curr->next;
           curr->next=prev;
           prev=curr;
           curr=temp; }
       return prev;}
    int isPalindrome(Node *head)
    {
        Node *mid=findmid(head);
       Node *new_head=reverse(mid);
       while(head!=mid){if(head->data==new_head->data)
           {head=head->next;
               new_head=new_head->next;}
           else return false;
       }
       return true;
   }  
