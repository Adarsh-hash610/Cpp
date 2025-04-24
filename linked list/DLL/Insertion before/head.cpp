#include<iostream>
#include<vector>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1,Node* back1)
    {
        data=data1;
        next=next1;
        back=back1;
    }

    Node(int data1)
    {
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convert2DLL(vector<int>& arr)
{
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* insertBeforeHead(Node* head,int value)
{
    Node* newNode=new Node(value,head,nullptr);
    head->back=newNode;
    head=newNode;
    return head;
}
Node* insertBeforeTail(Node* head,int value)
{
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;
    Node* newNode=new Node(value,temp,prev);
    temp->back=newNode;
    prev->next=newNode;
    return head;
}
Node* insertBeforeKthNode(Node* head,int k,int value)
{
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k) break;
        temp=temp->next;

    }
    Node* prev=temp->back;
    Node* newNode=new Node(value,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}
void print(Node* head)
{
    while(head)
    {
        cout << head->data<<" ";
        head=head->next;
    }
}
int main()
{
    vector<int>arr={2,3,6,8};
    Node* head=convert2DLL(arr);
    // head=insertBeforeHead(head,10);
    // head=insertBeforeTail(head,20);
    head=insertBeforeKthNode(head,3,30);
    print(head);
}