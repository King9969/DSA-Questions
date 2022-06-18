   vector<int>v;
     queue<Node*>q;
     q.push(node);
    
     while(!q.empty()){ 
         Node *top=q.front();
         q.pop();
         v.push_back(top->data);
         if(top->right!=NULL)q.push(top->right);
         if(top->left!=NULL)q.push(top->left);}

      reverse(v.begin(),v.end());return v;
