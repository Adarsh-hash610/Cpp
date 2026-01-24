#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    //private --> Iske niche ki saari cheezein private ho jayengi
};
int main()
{
    Hero Virat;
    Virat.health=70;
    Virat.level='A';
    cout<<"health is: "<<Virat.health<<endl;
    cout<<"level is: "<<Virat.level<<endl;
}