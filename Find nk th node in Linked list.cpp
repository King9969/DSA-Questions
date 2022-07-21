{
    int c=0;
    Node *temp=head;
    while(temp){c++;temp=temp->next;}
     int x=ceil(c/(k*1.0));
    temp=head;
    for(int i=1;i<=x-1;i++)
    temp=temp->next;
    return temp->data;
}
