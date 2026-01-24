// We use linked based stack does not have a size limit because it grows dynamically.

#include<iostream>
using namespace std;

//Node Structure...
class Node{
    public:
    int data;
    Node* next;

    Node(int value)
    {
        data=value;
        next=nullptr;
    }

};

// Stack using linked list...
class Stack{
    private:
    Node* top;      //Pointer to the top node...
    
    public:
    Stack(){
        top=nullptr;
    }

    //Push Operation..
    void push(int value)
    {
        Node* newNode= new Node(value);
        newNode->next=top;
        top=newNode;
        cout << "Element Pushed: "<<value<<endl;
    }

    void pop(){
        if(top==nullptr){
            cout << "Stack underflow!!"<<endl;
            return;
        }
        Node* temp=top;
        cout << "Popped element is: "<<top->data<<endl;
        top=top->next;
        delete temp;
    }

    int peek(){
        if(top==nullptr) return -1;
        return top->data;
    }

    bool isEmpty(){
        if(top==nullptr){
            return true;
        }
        else{
            return false;
        }
    }

    void display(){
        if(isEmpty()){
            return;
        }
        Node* temp=top;
        cout <<"Stack elements are: "<<endl;
        while(temp!=nullptr){
            cout << temp->data<<" "<<endl;
            temp=temp->next; 
        }
    }

    // Destructor to free memory...
    ~Stack(){
        while(!isEmpty()){
            pop();
        }
    }
};
int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element is: " << s.peek() << "\n";

    s.pop();
    s.display();

    return 0;

}
