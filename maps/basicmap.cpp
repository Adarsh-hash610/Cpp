#include<iostream>
using namespace std;
#include<map>

int main()
{
    map<string, int>m;          //Creating the map...

    //insertion in the map...

    m["apple"]=50;              //inserting using the [] operator...
    m.insert({"banana",30});    //inserting using the "insert with pair".... 
    m.insert({"cherry",20});

    //Printing in the map...

    cout << "Elements in the map after the insertion: \n";

    for(auto it:m)
    {
        cout << it.first << " ---> " << it.second << endl;
    }

    //Finding the elements in the map...

    string key="banana" ;
    auto it= m.find(key);

    if(it !=m.end())
    {
        cout << " Element  " << key << " found in the map with value: " << it->second << endl;
    }

    else{
            cout << "element " << key << "not found in the map " << endl;
    }
}