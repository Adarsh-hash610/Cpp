#include<iostream>
#include<math.h> 
using namespace std;

void prime(int num)
{
    int i;
    int count=0;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        cout << "not prime"<< endl;
    }
    else{
        cout << "prime" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    prime(n);
}