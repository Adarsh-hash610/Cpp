#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    int smallProblem=fact(n-1);
    int biggerProblem=n*smallProblem;
    return biggerProblem;
}
int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout << ans;
}