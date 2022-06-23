    void connect(Node *root){
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
          Node*curr=NULL;
          int n=q.size();
          for(int i=0;i<n;i++){
              curr=q.front();
              q.pop();
              if(!q.empty())curr->nextRight=q.front();
              if(curr->left)q.push(curr->left);
              if(curr->right)q.push(curr->right);
          }curr->nextRight=NULL;
      }
    }
