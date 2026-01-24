#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    static int timeToComplete;
};

int Hero :: timeToComplete=5;
int main()
{
    cout << Hero:: timeToComplete<<endl;   //without creation of object...(this method is recommended to print the static method)

    Hero a;
    cout << a.timeToComplete<<endl;     //printing by object creation...(but this method is not recommended)
}