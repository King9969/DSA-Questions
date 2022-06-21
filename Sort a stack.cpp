void add(stack<int>&s,int x){
    if(s.empty()||(!s.empty()&&s.top()<=x)){
        s.push(x);
        return;
    }
    int top=s.top();
    s.pop();
    add(s,x);
    s.push(top);
}
void SortedStack :: sort()
{
   if(s.empty())return;
   int top=s.top();
   s.pop();
   sort();
   add(s,top);
}
