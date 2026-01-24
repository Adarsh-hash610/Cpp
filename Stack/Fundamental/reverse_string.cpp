#include<iostream>
#include<stack>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char* name=new char[n];
    cout << "Enter the original string: ";
    for(int i=0;i<n;i++)
    {
        cin>>name[i];
    }
    stack<char>s;
    for(int i=0;i<n;i++)
    {
        char ch=name[i];
        s.push(ch);
    }
    string ans ="";
    for(int i=0;i<n;i++)
    {
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << "Reverse string is: "<< ans<<endl;
}

