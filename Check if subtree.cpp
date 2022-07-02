  public:
    bool is(Node*p,Node*q){
        if(!p&&!q)return true;
        if(!p||!q)return false;
        if(p->data!=q->data)return false;
        return is(p->left,q->left)&&is(p->right,q->right);
    }
    bool isSubTree(Node* T, Node* S) 
    {
        if(!T)return false;
        if(is(T,S))return true;
        return isSubTree(T->left,S) || isSubTree(T->right,S);
    }
