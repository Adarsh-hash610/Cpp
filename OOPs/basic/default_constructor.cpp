#include<iostream>
using namespace std;

class Hero{
    public:
    Hero(){                                     //default constructor...
        cout << "Constructor called"<<endl;
    }
};
int main()
{
    //object creation statically...
    Hero virat;

    //object creation dynamically...
    Hero *v=new Hero;
}