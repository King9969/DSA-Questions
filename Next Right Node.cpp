  Node *nextRight(Node *root, int key)
    {
       queue<Node*>q;
       q.push(root);
       while(!q.empty()){
           int x=q.size();
           int p=-1;
           while(x--){
               Node* node=q.front();
               q.pop();
               if(p==key)return node;
               else p=node->data;
               if(node->left)q.push(node->left);
               if(node->right)q.push(node->right);
           }
       }
       Node* temp = new Node(-1);
       return temp;
    }
