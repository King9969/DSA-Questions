vector<int> tree;
    vector<int> serialize(Node *root) 
    {
        if(!root){
            tree.push_back(-1);
            return tree;
        }
        tree.push_back(root->data);
        tree = serialize(root->left);
        tree = serialize(root->right);
        return tree;
    }  
    int curr=0;
    Node * deSerialize(vector<int> &A)
    {
      if(A[curr]==-1 || curr>=A.size())return NULL;
       Node* root = new Node(A[curr]);
       curr++;
       root->left =deSerialize(A);
       curr++;
       root->right =deSerialize(A);
       return root;
    }
