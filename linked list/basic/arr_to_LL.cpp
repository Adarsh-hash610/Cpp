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
Node* convertarray2LL(vector<int>& arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    Node* temp;
    for(int i= 1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
        cout << temp->data<<" ";
    }
    cout<<endl;
    cout << mover->data<<endl;
    return head;
}

int main()
{
    vector<int>arr={12,3,1,5,6};
    Node* head=convertarray2LL(arr);
    cout << head->data;
}
