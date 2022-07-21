stack<int> _push(int arr[],int n)
{
  int res=INT_MAX;
  stack<int>s;
  for(int i=0;i<n;i++){
      res=min(res,arr[i]);
      s.push(res);
  }return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{   
    while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();}
}
