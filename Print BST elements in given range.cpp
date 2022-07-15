void inorderTraversal(Node *root, int low, int high, vector<int> &result)
   {
       if(root == NULL) return;
       inorderTraversal(root->left,low,high,result);
       if(root->data >=low && root->data <=high) result.push_back(root->data);
       inorderTraversal(root->right,low,high,result);
   }
    vector<int> printNearNodes(Node *root, int low, int high) {
       vector<int> result;
       inorderTraversal(root,low,high,result);
       return result;
    }
