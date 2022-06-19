bool isCircular(Node *head)
{   
    Node * ptr = head;
    while(1){
        head = head->next;
        if(head==NULL) return false;
        else if(head==ptr)return true;
}
}
