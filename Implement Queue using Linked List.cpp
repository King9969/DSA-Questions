void MyQueue:: push(int x)
{
       QueueNode *newNode= new QueueNode(x);
       if(front==NULL){        
            front=rear=newNode;
        }else{                   
            rear->next=newNode;
            rear=newNode;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        if(front==NULL) return -1;  
        int ans=front->data;
        front=front->next;
        return ans;
}
