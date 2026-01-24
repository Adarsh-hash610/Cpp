#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertBST(Node* root,int data)
{
    if(root==NULL)
    {
        root= new Node(data);
        return root;
    }

    if(root->data>data)
    {
        root->left=insertBST(root->left,data);
    }
    else{
        root->right=insertBST(root->right,data);
    }
    return root;
}

void takeInput(Node* &root)
{
    int data;
    cin>>data;

    while(data!=-1)
    {
        root=insertBST(root,data);
        cin>>data;
    }
}

int main()
{
    Node* root=NULL;
    cout<<"ENter the data for node "<<endl;
    takeInput(root);
}