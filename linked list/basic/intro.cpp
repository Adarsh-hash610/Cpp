#include<iostream>
#include<vector>
using namespace std;


struct Node
{
    int data;
    Node* next;

    Node(int data1,Node* next1)            // Representation of a singly linked list.... 
    {
        data=data1;
        next=next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

int main()
{
    vector<int>arr={2,5,3,7,8};
    Node* y=new Node(arr[0],nullptr);
    cout << y->data<<endl;
    cout << y->next;
}

