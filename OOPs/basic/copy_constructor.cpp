#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
    }


    //copy constructor...
    Hero(Hero& temp){
        cout <<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }


    void print(){
        cout << "Health is: "<< this->health<<endl;
        cout <<"Level is: "<< this->level<<endl;
    }

};
int main()
{
    Hero S(70,'C');
    S.print();

    //copy constructor..
    Hero R(S);
    R.print();
}