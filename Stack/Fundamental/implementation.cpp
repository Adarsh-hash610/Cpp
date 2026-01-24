#include<iostream>
using namespace std;

class Stack{
    //Properties...
    public:
    int *arr;
    int top=-1;
    int size; 

    //Behaviour...
    Stack(int size)
    {
        this->size=size;
        arr= new int[size];
    }

    void push(int element){
        if(size-top>1)
        {
            top++;
            arr[top]=element;

        }
        else{
            cout << "Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout << "stack underflow"<< endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top element is: "<<st.peek()<<endl;
    st.pop();
    cout << "Top element is: "<<st.peek()<<endl;
    st.pop();
    st.pop();
    // if(st.isEmpty())
    // {
    //     cout << "stack is empty"<<endl;
    // }
    // else{
    //     cout << st.peek()<<endl;
    // }
    cout << "Top element is: "<<st.peek()<<endl;
    

    
}