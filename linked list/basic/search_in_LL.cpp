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

int search_in_LL(Node* head,int key)
{
    Node* temp=head;
    while(temp)
    {
        if(temp->data==key)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

int Length_of_LL(Node* head)
{
    int count=0;
    Node* temp=head;
    while(temp)
    {
        count++;
        temp=temp->next;

    }
    return count;
}

int main()
{
    vector<int>arr={2,4,3,1,7,5};
    Node* head=converttoLL(arr);
    cout << head->data<<endl;
    cout << search_in_LL(head,5)<<endl;
    cout << Length_of_LL(head);
}

