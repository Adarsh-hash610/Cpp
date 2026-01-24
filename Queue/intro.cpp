#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // create a queue...
    queue<int>q;

    q.push(18);
    q.push(17);
    q.push(10);

    cout << "size of queue is: "<<q.size()<<endl;

    q.pop();
    cout << "size of queue is: "<<q.size()<<endl;

    if(q.empty())
    {
        cout <<"Queue is empty"<<endl;
    }
    else{
        cout << "Queue is not empty"<<endl;
    }

    cout <<"front element is: "<<q.front()<<endl;


}