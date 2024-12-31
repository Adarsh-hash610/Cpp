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
};

Node* convert_to_LL(vector<int>&arr)
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

Node* removetail(Node* head)
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
    temp->next=NULL;
    return head;

}

void print(Node* head)
{
    while(head!=NULL)
    {
        cout << head->data<<" ";
        head=head->next;
    }
    cout <<endl;
}

int main()
{
    vector<int>arr={12,4,7,5};
    Node* head=convert_to_LL(arr);
    head=removetail(head);
    print(head);
}
    
