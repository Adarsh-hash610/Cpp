#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
    cout << "print the array: ";
    for(int i=0;i<size;i++)
    {
        cout << arr[i]<<" ";
    }
    cout <<"printing DONE";
    cout << endl;
}
void printfifth(int arr[],int size)
{
    cout << "print the array: ";
    for(int i=0;i<size;i++)
    {
        arr[i]=1;
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
     //declare
    int num[15];
    //accessing an array
    cout << "value at index 1 is :" << num[14] << endl;
    // cout << "value at index 20 is: " << num[20] << endl; ---> error because array size is only upto 15 elements

    //initialising an array
    int second[3]={5,7,11};

    //accessing an elements...
    cout << "value at index 2 is: " << second[2] << endl;

    int third[15]={2,7};
    int n=15;
    printarray(third,15);

    int fourth[10]={0};
    n= 10;
    printarray(fourth,10);

    int fifth[10]={1};
    n=10;
    printfifth(fifth,10);
}