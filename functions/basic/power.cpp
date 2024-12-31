#include<iostream>
using namespace std;

int power(int num1,int num2)
{
    int ans=1;
    int i;
    for(i=1;i<=num2;i++)
    {
        ans=num1*ans;
    }
    return ans;
}
int main()
{
    int n,pow;
    cout << "Enter the n: ";
    cin >> n;
    cout << "Enter the pow: ";
    cin >>pow;
    int answer= power(n,pow);

    cout << "answer is: " << answer;
}