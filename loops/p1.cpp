#include<iostream>
#include<string>
using namespace std;

int main()
{
    string response;
    do{
        cout << "Do you want the cup of tea(yes/no): "<<endl;
        getline(cin,response);
    }while (response=="yes" || response=="Yes");
    
}