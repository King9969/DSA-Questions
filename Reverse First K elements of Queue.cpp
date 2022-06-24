queue<int> modifyQueue(queue<int> q, int k) {
 queue<int>ans;
 deque<int>temp;
 for(int i=0;i<k;i++){
     temp.push_front(q.front());
     q.pop();
 }
 while(!q.empty()){
     temp.push_back(q.front());
     q.pop();
 }
 while(!temp.empty()){
     ans.push(temp.front());
     temp.pop_front();
 }
 return ans;
}
