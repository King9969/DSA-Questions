void addNode(Node *head, int pos, int data)
{
    Node *cur=head;
    for(int i=0;i<pos;i++)cur=cur->next;
    Node *temp=new Node(data);
    if(cur->next){
        temp->next=cur->next;
        cur->next->prev=temp;
    }
    cur->next=temp;
    temp->prev=cur;
}
