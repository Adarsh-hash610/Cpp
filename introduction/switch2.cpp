#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;
    char ch='%';

    switch(ch)
    {
        case '%' : int m=n/100;
                    cout << "number of 100 notes: " << m << endl;
                   n=n%100;
                   cout << "number of 50 notes: " << n/50 << endl;
                   n=n%50;
                   cout << "number of 20 notes: " << n/20 << endl;
                   n=n%20;
                   cout << "number of 1 notes: " << n/1 << endl;

    }

}