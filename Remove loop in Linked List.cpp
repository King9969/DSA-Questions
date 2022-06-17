 Node* slow=head,*fast=head;
       while(fast!=NULL && fast->next!=NULL){ //detect loop
           slow=slow->next;
           fast=fast->next->next;
           if(fast==slow){
               break;
           }
       }
       if(slow==head){     //if loop at the head
           while(slow!=fast->next){
                 fast=fast->next;
               }
               fast->next=NULL;
       }
       else if(slow==fast){  //loop point except the head
           slow=head;
           while(slow->next!=fast->next){
                 slow=slow->next;
                 fast=fast->next;
               }
               fast->next=NULL;
