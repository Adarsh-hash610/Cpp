#include<iostream>
#include<vector>
using namespace std;


int check_palindrome(char name[],int i,int n,int j)
{
    while(i<j)
    {
        if(name[i]==name[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    char name[5]={"abca"};
    cin>>name;
    int i=0;
    int j=4;
    while(i<j)
    {
        if(name[i]==name[j])
        {
            i++;
            j--;
        }
        else{
            cout << (check_palindrome(name,i+1,5,j)|| check_palindrome(name,i,5,j-1));
        }
    }
    cout << true;
}