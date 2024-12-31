#include<iostream>
using namespace std;

int main()
{
    int n,i,j,count=1;

    cout << "Enter the number: ";
    cin >> n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            cout << count*2 <<" ";
            count++;
        }
        cout << endl;
    }
}