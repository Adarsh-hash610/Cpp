#include<iostream>
using namespace std;

int count(int n){
    if(n==1){
        return 1;
    }
    // if(n==0){
    //     return;
    // }
    count(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    count(n);
}