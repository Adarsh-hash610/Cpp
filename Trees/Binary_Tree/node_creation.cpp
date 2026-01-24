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
        left=NULL;
        right=NULL;
    }
};

Node* createTree(){
    cout <<"Enter the value for the Node: "<<endl;
    int value;
    cin>>value;

    if(value==-1)
    {
        return NULL;
    }
    else{
        Node* root=new Node(value);
        // now recursion will look after the left and right node...
        // adding left child...
        cout << "adding left child: "<<value<<endl;
        root->left=createTree();

        // adding right child...
        cout << "adding right child: "<<value<<endl;
        root->right=createTree();

        return root;
    }
}

int main()
{
    Node* root;
    root=createTree();

    cout <<"Printing root: "<<root->data<<endl;

    return 0;
}
