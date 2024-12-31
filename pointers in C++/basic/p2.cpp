#include<iostream>
using namespace std;

int main()
{
    // int arr[10]={2,4,5,7};
    // cout << "address of first memory location is: "<< arr <<endl;
    // cout << "address of first memory location is: "<<&arr[0]<<endl;
    // cout << "first: "<<*arr<<endl;
    // cout << "second: "<<*arr+1<<endl;
    // cout << "third: "<<*(arr+3)<<endl;

    int temp[10]={1,2};
    cout << "size of temp: "<<sizeof(temp)<<endl;
    cout << "first: "<<sizeof(*temp)<<endl;
    cout << "second: "<<sizeof(&temp)<<endl;
    int *p=&temp[0];
    cout << sizeof(*p)<<endl;
    cout<< sizeof(p)<<endl;
    cout<< sizeof(&p)<<endl;
    cout<< *p<<endl;
    cout<< &p <<endl;
    cout<<p<<endl;
    
}