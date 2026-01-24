#include<iostream>
using namespace std;

bool isEven(int n){
    if(n&1) return false;
    return true;
}

int main()
{
    long long n;
    cin>>n;
    cout << n<<" ";
    while(n!=1)
    {
        if(isEven(n)){
            n=n/2;
            cout << n<<" ";
        }
        else{
            n=(n*3)+1;
            cout << n<<" ";
        }
    }

}