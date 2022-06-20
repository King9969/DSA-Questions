Node* getMiddle(Node* head){
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
           slow=slow->next;
           fast=fast->next->next;   
        }
        return slow;
    }
    Node* reverse(Node* head){ 
        Node* prev=NULL;
        Node* next=NULL;
        while(head){
           next=head->next;
           head->next=prev;
           prev=head;
           head=next; 
        }
        return prev;
    }
void reorderList(Node* head) {
        Node* h=head;
        Node* mid=getMiddle(head);
         Node* reversed=reverse(mid->next);
         mid->next=NULL; 
        while(head && reversed){
             Node* temp=head->next;     
             Node* temp2=reversed->next;
             head->next=reversed;          
             head->next->next=temp;
             head=temp;
             reversed=temp2;}
}
