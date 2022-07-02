    int getMaxWidth(Node* root) {
        int ans=INT_MIN;
    queue<Node*>q;
     q.push(root);
     while(!q.empty()){
     int n=q.size();
    ans=max(n,ans);
    for(int i=0;i<n;i++){
         Node*top=q.front();
         q.pop();
         if(top->left)q.push(top->left);
         if(top->right)q.push(top->right);
     }
    }return ans;
    }
