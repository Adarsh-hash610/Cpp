#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }

    Node(int data1,Node* nextnode)
    {
        data=data1;
        next=nextnode;
    }
};

Node* convert_to_LL(vector<int>& arr)
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

Node* insert_before_val(Node* head,int value,int element)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node* temp=head;
    while (temp->next!=NULL)
    {
        if(temp->next->data==value)
        {
            Node* x=new Node(element,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    
}

void print(Node* head)
{
    while(head)
    {
        cout << head->data<<" ";
        head=head->next;
    }
    cout <<endl;
}

int main()
{
    vector<int>arr={5,8,3,4};
    Node* head=convert_to_LL(arr);
    head=insert_before_val(head,8,7);
    print(head);
}
