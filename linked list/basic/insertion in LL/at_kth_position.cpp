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

Node* insert_at_kth_position(Node* head,int k,int value)
{
    if(head==NULL)
    {
        if(k==1)
        {
            return new Node(value);
        }
        
    }
    if(k==1)
    {
        return new Node(value,head);
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        if(count==k-1)
        {
            Node* x=new Node(value,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;

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
    vector<int>arr={2,5,3,8};
    Node* head=convert_to_LL(arr);
    head=insert_at_kth_position(head,2,6);
    print(head);
    
}
