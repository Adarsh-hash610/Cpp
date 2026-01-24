#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=nullptr;
    }

    Node(int value,Node* nextNode){
        int data=value;
        next=nextNode;
    }
};

Node* convert_to_LL(vector<int>arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* sort_LL(Node* head){
    if(head==NULL){
        return nullptr;
    }
    
}

Node* inserthead(Node* head,int value)
{
    Node* temp= new Node(value,head);
    return temp;
}

int main()
{
    vector<int>arr={5,8,3,4};
    Node* head=convert_to_LL(arr);
    head=inserthead(head,100);
    sort_LL(head);
}
