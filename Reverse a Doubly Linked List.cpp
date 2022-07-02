Node* reverseDLL(Node * head){
    swap(head->next, head->prev);
	  if(!head->prev) return head;
	  return reverseDLL(head->prev);
}
