Node* insertInMiddle(Node* head, int x){
    	Node* m=new Node(x);
    	Node* fast=head,*slow =head;
    	while(fast->next&&fast->next->next){
    	    slow=slow->next;
    	    fast=fast->next->next;
    	}
    	m->next=slow->next;
    	slow->next=m;
    	return head;
}
