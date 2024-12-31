// Print the name N times using recursion....

#include<iostream>
using namespace std;

void f(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout << "Adarsh"<<endl;
    f(i+1,n);
}
int main()
{
    int n;
    int i=1;
    cout<< "Enter the n: ";
    cin >> n;
    f(i,n);
}