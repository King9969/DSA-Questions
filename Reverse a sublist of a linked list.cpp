 Node* reverseBetween(Node* head, int m, int n)
    {
        Node *res = head;
        Node *tStartPrev = NULL;
        int i=1;
        if(m != 1){ 
            while(i < m-1){
                head = head->next;
                i++;}
            tStartPrev = head;
            head = head->next;
        }
        else i=0;
        Node *tStart = head;
        Node *prev = NULL;
        Node *cur = head;
        while(cur != NULL && i < n)
        {
            Node *temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
            i++;
        }
        tStart->next = cur;
        if (m == 1)
            return prev;
        tStartPrev->next = prev;
        return res;
    }
