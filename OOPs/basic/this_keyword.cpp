#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    Hero(){
        cout << "Constructor called"<<endl;
    }
    Hero(int health){
        cout << "this->" << this<<endl;
        this->health=health;
    }
    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
    }
    void print(){
        cout << health<<endl;
        //cout << level<< endl;
    }
    void print2(){
        cout << health<<endl;
        cout << level<<endl;
    }
    int gethealth(){
        return health;
    }
};
int main()
{
    Hero virat(10);
    // cout << "address of virat: "<< &virat<<endl;
    // virat.gethealth();
    virat.print();

    // Dynamically...
    Hero *h1= new Hero(15);
    h1->print();
    Hero h3(30,'A');
    h3.print2();

}