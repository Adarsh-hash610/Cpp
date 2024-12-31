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

Node* remove_kth_node(Node* head,int k)
{
    if(head==NULL)
    {
        return head;
    }
    if(k==1)
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int count=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        count++;
        if(count==k)
        {
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;


}
void print(Node* head)
{
    
    while(head)
    {
        cout<< head->data<<" ";
        head=head->next;
    }
    cout <<endl;
}

int main()
{
    vector<int>arr={12,4,5,7};
    Node* head=convert_to_LL(arr);
    head=remove_kth_node(head,5);
    print(head);
}
