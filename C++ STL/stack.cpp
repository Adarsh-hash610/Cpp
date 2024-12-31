#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>s;
    s.push("Adarsh");
    s.push("Samriddhi");
    s.push("Pandey");

    cout << "top element: "<<s.top()<<endl;
    s.pop();
    cout << "top element: "<<s.top()<<endl;
    cout << "size of the stack: "<<s.size()<<endl;

    cout << "stack is empty or not: "<<s.empty()<<endl;
}