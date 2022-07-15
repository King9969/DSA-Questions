    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_map<int,int>m;
        while(head2){
            m[head2->data]++;
            head2=head2->next;
        }
        Node* ans=NULL;
        Node *prev;
        while(head1){
            if(m.find(head1->data)!=m.end()){
                 Node* temp = new Node(head1->data);
                temp->next = NULL;
                if(ans == NULL){
                    ans = temp;
                    prev = ans;
                }
                else{
                    prev->next = temp;
                    prev = temp;
                }
                m.erase(head1->data);
            }head1=head1->next;
        }
        return ans;
    }
