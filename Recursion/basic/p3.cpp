// Sum of first N natural number through recursion...

// 1):- Parameterised way

// #include<iostream>
// using namespace std;

// void f(int i,int sum)
// {
    
//     if(i<1)
//     {
//         cout <<"Sum of first N natural no. is: "<< sum;
//         return;
//     }
//     f(i-1,sum+i);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     f(n,0);
// }

// 2):- Functional way

#include<iostream>
using namespace std;
int f(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+f(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << (f(n));
}
