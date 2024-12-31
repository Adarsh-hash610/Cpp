#include<iostream>
using namespace std;
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
    cout << "print the array: ";
    //printing the array...
    for(int i=0;i<n;i++)
    {
        cout << third[i]<<" ";
    }
    cout << endl;

    //initialising all the locations with 0...

    int fourth[10]={0};
    n=10;
    cout <<"print the array: ";
    //printing the array..
    for(int i=0;i<n;i++)
    {
        cout << fourth[i] << " " ;
    }
    cout << endl;

    //initialising all elements with 1...
    int fifth[15]={1};
    n=15;
    cout << "print the arary: ";
    for(int i=0;i<n;i++)
    {
        fifth[i]=1;
        cout << fifth[i]<<" ";
    }
    

}