#include<iostream>
using namespace std;

void rowsum(int arr[][3],int row,int col)
{
    int sum;
    for(int row=0;row<3;row++)
    {
        sum=0;
        for(int col=0;col<3;col++)
        {
            sum=sum+arr[row][col];
        }
    cout<< sum<<" ";
    }
}

int main()
{
    int arr[3][3];
    cout << "enter the array elements: ";
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cin >>arr[row][col];
        }
      
    }
    rowsum(arr,3,3);
}