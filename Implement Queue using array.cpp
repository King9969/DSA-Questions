//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
        arr[rear++]=x;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        if(rear==front)return -1;
        else{
            return arr[front++];
        }
}
