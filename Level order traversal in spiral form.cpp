vector<int> findSpiral(Node *node)
{   
     vector<int>v;
     if(node==NULL){return v;}
     queue<Node*>q;
     q.push(node);
     int flag=false;
     while(!q.empty()){
         int n=q.size();
        vector<int> temp(n);
     for(int i=0;i<n;i++){
         Node *top=q.front();
         q.pop();
         if(flag)temp[i]=top->data;
         else temp[(n-i)-1]=top->data;
         if(top->left!=NULL)q.push(top->left);
         if(top->right!=NULL)q.push(top->right);}
         flag=!flag;
         for(auto i:temp)v.push_back(i);
    }return v;
}
