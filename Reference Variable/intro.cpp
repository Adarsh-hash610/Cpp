#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int &j=i;
    cout<<i<<endl;      //5
    cout<< j++ <<endl;  //5
    cout<<j<<endl;;     //6
    cout<<i;            //6
    return 0;

}