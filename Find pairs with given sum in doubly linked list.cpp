   vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
     unordered_map<int,int>m;
     vector<int>v;
     vector<pair<int,int>>ans;
     while(head){
         m[head->data]++;
         v.push_back(head->data);
         head=head->next;
     }
     for(auto i:v){ m[i]--;
         if(m[target-i]==1){
             ans.push_back({i,target-i});
            
         }
         
     }return ans;
    }
