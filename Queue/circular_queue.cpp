#include<iostream>
using namespace std;

class Circular_Queue{
    public:
    // Properties...
    int *arr;
    int front=-1;
    int rear=-1;
    int size;

    // Behaviour...
    Circular_Queue(int size){
        this->size=size;
        arr=new int[size];
    }

    void enqueue(int element)
    {
        if((rear+1)%size==front){
            cout<<"Queue is Full(overflow)"<<endl;
            return;
        }
        if(rear==size-1 && front!=0)
        {
            rear=0;
        }
        else if(front==-1)
        {
            front=rear=0;
        }
        else{
            rear=(rear+1)%size;
        }
        arr[rear]=element;
    }

    int dequeue()
    {
        if(front==-1){
            cout << "Queue is empty"<<endl;
            return -1;
            
        }
        int ans=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%size;
        }
        return ans;
    }

    void isEmpty(){
        if(front==-1){
            cout << "queue is empty"<<endl;
        }
        else{
            cout << "notempty"<<endl;
        }

    }

    void peek(){
        if(front==-1)
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            cout <<"Front element: "<<arr[front]<<endl;
        }
    }
};
int main()
{
    Circular_Queue q(5);
    cout << q.dequeue()<<endl;

    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(18);
    q.enqueue(17);
    q.enqueue(12);
    cout << "Popped element is: "<<q.dequeue()<<endl;
    q.peek();


}