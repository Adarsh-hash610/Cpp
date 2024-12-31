#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;
    m[1]="Adarsh";
    m[13]="Sam..";
    m[2]="Pandey";
    m.insert({5,"coding"});

    cout << "before erase: ";
    for(auto i:m)
    {
        cout<< i.first<<" "<<i.second<<endl;
    }cout << endl;

    cout <<"finding 13: "<<m.count(13)<<endl;

    m.erase(2);
    cout << "after earse: ";
    for(auto i:m)
    {
        cout << i.first<<" "<<i.second<<endl;
    }cout << endl;

    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++)
    {
        cout << (*i).first<<endl;
    }

}