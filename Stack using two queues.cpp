void QueueStack :: push(int x)
{
    q2.push(x);
    while(!q1.empty()){
    q2.push(q1.front());
       q1.pop();}
    while(!q2.empty()){
       q1.push(q2.front());
       q2.pop();}
}
int QueueStack :: pop()
{
    if(q1.empty())return -1;
    int data = q1.front();
    q1.pop();
    return data; 
}
