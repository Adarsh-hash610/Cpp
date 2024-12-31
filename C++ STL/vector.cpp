#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    cout << "capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout << "capacity: "<< v.capacity()<<endl;
    v.push_back(2);
    cout << "capacity: "<<v.capacity()<<endl;
    v.push_back(3);
    cout << "capacity: "<<v.capacity()<<endl;
    cout << "size: "<<v.size()<<endl;

    cout << "element at 1st index: "<<v.at(1)<<endl;
    cout << "first: "<<v.front()<<endl;
    cout << "last: "<<v.back()<<endl;

    cout << "before pop: ";
    for(int i:v)
    {
        cout << i<<" ";
    }
    cout << endl;
    v.pop_back();
    cout << "after pop: ";
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout << endl;
}