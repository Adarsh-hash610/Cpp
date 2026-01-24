#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    s.push(2);
    s.push(4);
    s.push(6);

    cout << "top element: "<<s.top()<<endl;
    s.pop();
    cout << "top element: "<<s.top()<<endl;
    cout << "size of the stack: "<<s.size()<<endl;

    cout << "stack is empty or not: "<<s.empty()<<endl;
}