#include<iostream>
#include<array>

using namespace std;
int main()
{
   
    array<int,4>a={1,2,3,4};
    int size=a.size();
    
    for(int i=0;i<size;i++)
    {
        cout << a[i];
    }
    cout << endl;

    cout << "Enter the first element: "<<a.front()<<endl;
    cout << "Enter the last element: "<< a.back()<< endl;
    cout << "Enter the element at 2nd position: "<<a.at(2)<<endl;
    cout << "array is empty or not: "<<a.empty()<<endl;
}