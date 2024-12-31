#include<iostream>
using namespace std;

int getlength(char name[])
{
    int i;
    int count=0;
    for(i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int palindrome(char name[],int n)
{
    int st=0;
    int e=n-1;
    while(st<=e)
    {
        if(name[st++]==name[e--])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char name[20];
    cout << "Enter the name: ";
    cin >>name;

    int length=getlength(name);

    cout << "palindrome or not: "<<palindrome(name,length)<<endl;
}