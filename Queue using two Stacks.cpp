//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
   while(!s1.empty()){
       s2.push(s1.top());
       s1.pop();
   }
   s2.push(x);
   while(!s2.empty()){
       s1.push(s2.top());
       s2.pop();
   }
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        if(s1.empty())return -1;
        int a=s1.top();
        s1.pop();
        return a;
}
