#include<iostream>
using namespace std;

int main()
{
    int n,i=2,count=0;
    cout << "Enter the number: ";
    cin >> n;
    while (i<=n/2)
    {
        if(n%i==0)
        {
            count++;
        }
        
        i++;
        /* code */

    }
    if(count>0)
    {
        cout << "number is not prime" << endl;
    }
    else{
        cout << "number is prime" << endl;
    }
    

    
} // namespace std;


