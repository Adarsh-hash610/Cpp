#include<iostream>
using namespace std;

bool palindrome(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        if(name[s]!=name[e])
        {
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

void reverse(char name[],int length)
{
    int start=0;
    int end=length-1;
    while(start<end)
    {
        swap(name[start++],name[end--]);
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
    reverse(name,length);
    cout<< "reverse: " << name<<endl;
    cout<<"Palindrome: "<<palindrome(name,length)<<endl;
    
}