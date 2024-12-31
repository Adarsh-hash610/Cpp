#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d;
    d.push_back(1);         //inserting elements from backside...
    d.push_front(2);        //inserting elements from front side... 
    for(int i:d)
    {
        cout << i<<" ";
    }
    cout <<endl;

    // d.pop_front();       //deleting the elements from font...
    // for(int i:d)
    // {
    //     cout << i << " ";        //output will be ----> '1'....
    // }
    
    cout << "print first index element: "<<d.at(1)<<endl;

    cout << "front: "<<d.front()<<endl;

    cout <<"back: "<<d.back()<<endl;

    cout << "Empty or not: "<<d.empty()<<endl;

    cout <<"before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i:d)
    {
        cout << i << " ";
    }
    cout << endl;
}