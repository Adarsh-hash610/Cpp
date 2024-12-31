#include<iostream>
using namespace std;

int lengthofstr(char name[])
{
    int count=0;
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int occurence(char name[],int n)
{
    int i;
    int count=1;
    for(i=0;i<n;i++)
    {
        
    }
}

int main()
{
    char name[20];
    cout << "Enter the string: ";
    cin >>name;
    int length=lengthofstr(name);
    cout << "Length of string is: "<<length;

}