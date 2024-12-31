#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* converttoLL(vector<int>& arr)
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

void print(Node* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head=head->next;
    }
    cout<<endl;
}
Node* removeHead(Node* head)
{
    if(head==NULL)
    {
        return head;
    }
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}

int main()
{
    vector<int>arr={12,5,4,7};
    Node* head=converttoLL(arr);
    
    head=removeHead(head);
    
    print(head);
}
