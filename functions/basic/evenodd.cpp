#include<iostream> 
using namespace std;
bool iseven(int num){
    if(num&1){
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;
  
    if( iseven(n)){

    cout << "number is even" << endl;
    }
    else{
    cout << "number is odd" << endl;
    }
}