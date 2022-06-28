void push(stack<int>& s, int a){
s.push(a);
}

bool isFull(stack<int>& s,int n){
return(s.size()==n?1:0);
}

bool isEmpty(stack<int>& s){
if(s.size()==0)
return true;
return false;
}

int pop(stack<int>& s){
return s.top();
s.pop();
}

int getMin(stack<int>& s){
   int ans=s.top();
while(!s.empty()){
    ans=min(ans,s.top());
    s.pop();
}
return ans;
