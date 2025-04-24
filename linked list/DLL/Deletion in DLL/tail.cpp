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

Node* convert2DLL(vector<int>arr)
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

Node* deleteTail(Node* head)
{
    Node* temp=head;
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}

Node* removeKthelement(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
}

void print(Node* head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    vector<int>arr={1,3,2,4};
    Node* head=convert2DLL(arr);
    head=deleteTail(head);
    print(head);
}
