#include<iostream>
using namespace std;

int main()
{
    int num=5;
    cout<<num<<endl;
    cout<<"address of num is: "<< &num <<endl;
    int *p=&num;
    cout << *p<<endl;
    cout << "size of pointer is: "<<sizeof(p)<<endl;
    cout << "size of num is : "<<sizeof(num)<<endl;
    cout<<"before: "<<num<<endl;
    (*p)++;
    cout <<"after: "<<num<<endl;

}