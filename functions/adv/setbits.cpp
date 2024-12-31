#include<iostream>
using namespace std;


int setbits(int n)
 {
    int count=0;
    while(n>0)
    {
        if(n&1){
             count++;
          }
        n=n>>1;
    }    
    return count;
}

 int main()
 {
    int a;
    cout << "enter a: ";
    cin >> a;
    int result=setbits(a);
    
    cout << result;
}