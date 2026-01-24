#include<iostream>
using namespace std;

class Queue{
    // Properties...
    public:
    int *arr;
    int front=0;
    int rear=0;
    int size;

    // Behaviour...
    Queue(int size)
    {
        this->size=size;
        arr=new int[size];
    }

    void enqueue(int element)
    {
        if(rear==size)
        {
            cout << "Queue is full"<<endl;
        }
        else{
            arr[rear]=element;
            rear++;
        }
    }

    int dequeue(){
        if(front==rear)
        {
            return -1;
        }
        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
            return ans;
        }

    }
    
    int getfront(){
        if(front==rear)
        {
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty()
    {
        if(front==rear)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Queue q(10);
    q.enqueue(10);
    q.enqueue(18);
    q.enqueue(17);
    cout << "Element popped out is: "<<q.dequeue()<<endl;
    cout << "Current top element is: "<<q.getfront()<<endl;
    q.enqueue(24);
    q.enqueue(20);
    
}