    void longestpath(Node* root, int height, int sum,priority_queue<pair<int,int>>& pq){
       if(!root) return ;
       sum += root->data;
       pq.push({height, sum});
       longestpath(root->left, height+1, sum, pq);
       longestpath(root->right, height+1, sum, pq);
       }
   
   int sumOfLongRootToLeafPath(Node *root){
       priority_queue < pair<int,int> > pq;
       longestpath(root,0,0,pq);
       return pq.top().second;
   }
