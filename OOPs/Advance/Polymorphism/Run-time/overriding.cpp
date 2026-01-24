#include<iostream>
using namespace std;

class Animal{
    public:
        string name;
    void speak()
    {
        cout <<"Speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    
};
int main()
{
    Dog obj;
    obj.speak();

    return 0;
}