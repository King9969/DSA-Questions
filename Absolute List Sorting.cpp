    Node* sortList(Node* head)
    {
        vector<int> a;
        struct Node *p =head;
        while(p){
            a.push_back(p->data);
            p=p->next;
        }
        sort(a.begin(),a.end());
        struct Node *q =head;
        int x=0;
        while(q){
            q->data=a[x++];
            q=q->next;
        }return head;
    }
