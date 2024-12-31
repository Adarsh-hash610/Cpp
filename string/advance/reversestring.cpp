#include<iostream>
using namespace std;

void reversename(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

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

int main()
{
    char name[20];
    cout << "Enter the name: ";
    cin >>name;

    cout << "Your name is: "<<name<<endl;
    int length=getlength(name);
    cout<< "length: "<<length<<endl;
    reversename(name,length);
    cout << "reverse: " << name;
    
}