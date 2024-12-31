#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, p=0,i=0;
    cout <<"Enter the n: ";
    cin >> n;

    while(n!=0)
    {
        int bit=n&1;
        p = (bit * pow(10,i)) + p;
        n=n>>1;
        i++;
    }
    cout << p << endl;
}