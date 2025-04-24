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

Node* convertToDLL(vector<int>& arr)
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

void deleteNode(Node* temp)
{
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL)
    {
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return;
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    free(temp);
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
    vector<int>arr={2,3,5,7};
    Node* head=convertToDLL(arr);
    deleteNode(head->next->next);
    print(head);
}
