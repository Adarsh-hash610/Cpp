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

Node* createNode()
{
    int value;
    cout << "Enter the value to be inserted: ";
    cin>>value;
    if(value==-1)
    {
        return NULL;
    }
    else{
        Node* root= new Node(value);

        cout << "Enter into the left child"<<value<<endl;
        root->left=createNode();

        cout <<"Enter into the right child"<<value<<endl;
        root->right=createNode();
    }
    
}

void preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    else{
        cout << root->data<<endl;
        preorder(root->left);
        preorder(root->right);


    }
}

void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    else{
        postorder(root->left);
        postorder(root->right);
        cout << root->data<<endl;
    }
}

void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    else{
        inorder(root->left);
        cout << "rott->data"<<endl;
        inorder(root->right);
    }
}

int main()
{
    Node* root;
    root=createNode();
    cout<<"root: "<<root->data<<endl;

    cout <<"Inorder of the resultant tree is: "<<endl;
    preorder(root);

    cout << "Postorder of the resultant tree is: "<<endl;
    postorder(root);

    cout <<"Inorder of the resultant tree is: "<<endl;
    inorder(root);
}