#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string>q;

    q.push("Adarsh");
    q.push("Samriddhi");
    q.push("Pandey");

    cout << "size before pop: "<<q.size()<<endl;
    cout << "First element: "<<q.front()<<endl;
    q.pop();
    cout<< "first element after pop: "<<q.front()<<endl;
    cout << "size after pop: "<<q.size()<<endl;
}