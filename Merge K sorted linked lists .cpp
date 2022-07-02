        Node* merge(Node* a,Node*b){
        Node* res = NULL;
        if(!a)return b;
        else if(!b)return a;
        if(a->data <= b->data){
            res = a;
            res->next = merge(a->next,b);
        }
        else{
            res = b;
            res->next = merge(a,b->next);
        }
        return res;
    }
    Node * mergeKLists(Node *arr[], int K)
    {
        for(int i=1;i<K;i++)arr[0] = merge(arr[0],arr[i]);
        return arr[0];
    }
