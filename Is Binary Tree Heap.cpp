 bool isHeap(struct Node* tree) {
       queue<Node*> q;
        q.push(tree);
        bool null=false;
        while(!q.empty()){
            Node* top=q.front();
            q.pop();
            if(top->left){
                if(null || top->data<=top->left->data){
                return false;
                }else{
                    q.push(top->left);
                }
            }else{
                null=true;
            }
            if(top->right){
                if(null || top->right->data>=top->data){
                    return false;
                }else{
                    q.push(top->right);
                }
            }else{
                null=true;
            }
        }
        return true;
    }
