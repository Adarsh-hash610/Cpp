#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //creation...
    unordered_map<string,int>mp;

    //insertion...
    // 1...
    pair<string,int>p = make_pair("adarsh",2);
    mp.insert(p);

    // 2...
    pair<string,int>p2("pandey",2);
    mp.insert(p2);

    // 3...
    mp["from"]=1;
    mp["from"]=2;
    mp["gorakhpur"]=2;

    //search...
    cout << mp["mera"]<<endl;
    cout << mp.at("bacchha")<<endl;

    cout << mp.at("unknownKey") <<endl;
    cout << mp["unknownKey"]<<endl;

    cout << mp.at("unknownKey")<<endl;

    // size...
    cout << mp.size() <<endl;

    // To check presence of any key...
    cout << mp.count("adarsh") << endl;
    cout << mp.count("pandey")<<endl;

    // erase...
    mp.erase("mera");
    cout << mp.size() << endl;

    // Iterator...
    unordered_map<string,int>::iterator it = mp.begin();

    while(it!=mp.end()){
        cout << it->first << " " <<it->second <<endl;
        it++;
    }

}
