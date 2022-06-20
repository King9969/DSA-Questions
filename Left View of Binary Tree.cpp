
vector<int> v;
   if(root==NULL)return v;
   queue<Node*> q;
   q.push(root);
   while(q.empty()==false){
       int n=q.size();
       for(int i=0;i<n;i++){
           Node *cur=q.front();q.pop();
           if(i==0)v.push_back(cur->data);
           if(cur->left != NULL)q.push(cur->left);
           if(cur->right != NULL)q.push(cur->right);
       }
   }return v;
