#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target,int row,int col)
{
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            if(arr[row][col]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];
    //taking the input-->row wise...
    // for(int row=0;row<3;row++)
    // {
    //     for(int col=0;col<4;col++)
    //     {
    //         cin>>arr[row][col];
    //     }
    // }

    //taking the input-->column wise...
    for(int row=0;row<4;row++){
        for(int col=0;col<3;col++)
        {
            cin>>arr[col][row];
        }
        
    }

    //print the array...
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<arr[row][col]<<" "; 
        }
        cout << endl;
    }
    int target;
    cout << "Eneter the target: ";
    cin >> target;

    if(ispresent(arr,target,3,4)){
        cout <<"target found";
    }
    else{
        cout << "not found";
    }

    
}