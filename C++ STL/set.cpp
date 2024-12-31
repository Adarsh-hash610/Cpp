#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);

    for(auto i: s)
    {
        cout << i<<endl;        //printing the elements of the set...
    }

    set<int>:: iterator it=s.begin();
    // it++;
    // s.erase(it);                 //to erase the element from the set...
    // for(auto i:s)
    // {
    //     cout<<i<<endl;
    // }cout <<endl;

    cout << "5 is present or not: "<<s.count(5)<<endl;      //to check whether element is present or not...

    set<int>:: iterator itr= s.find(5);
    // cout <<"value present at itr: "<<*it<<endl;

   
    for(auto it=itr;it!=s.end();it++)
    {
        cout << *it <<endl;
    }

}