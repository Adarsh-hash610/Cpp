#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }

    Node(int value,Node* nextNode){
        data = value;
        next = nextNode;
    }
};

Node* create_to_LL(vector<int>arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* inserthead(Node* head,int value)
{
    Node* temp= new Node(value,head);
    return temp;
}


Node* bubble_sort_LL(Node* head){

    while(head){
        if(head->data > head->next->data){
            Node* temp= head->next;
            head->next = head->next->next;
            head->next->next = temp;
        }
        head=head->next;
    }
    return head;
}

void print_LL(Node* head)
{
    while(head){
        cout << head->data<<" ";
        head=head->next;
    }
    cout <<endl;
}


int main(){
    vector<int>arr = {6,3,7,4};
    cout <<"Hello"<<endl;
    cout<<"bharat";
    cout <<"Namo";
    cout <<"Namaste";
    Node* head = create_to_LL(arr);  
    head=inserthead(head,100);
    Node*  tempo = bubble_sort_LL(head);
    print_LL(tempo);
    cout <<"Hello"<<endl;
}