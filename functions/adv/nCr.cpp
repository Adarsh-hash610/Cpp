#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;

}

int main()
{
    int n,r;
    cout << "Enter the n:";
    cin >> n;
    cout << "Enter the r: ";
    cin >> r;

    int combination= (factorial(n)/(factorial(r)*factorial(n-r)));
    
    cout << "combination of nCr: " << combination<< endl;
   
    
}