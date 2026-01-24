// getter and setter methods are use to access members in private 
#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    char level;
    public:
    //getter method...
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    //setter method....
    void sethealth(int h){
        health=h;
    }
    void setlevel(char l){
        level=l;
    }
};

int main()
{
    Hero h1;
    cout <<"health of h1: "<<h1.gethealth()<<endl;
    cout <<"level of h1: "<< h1.getlevel()<<endl;

    //use setter...
    h1.sethealth(70);
    h1.setlevel('A');

    cout << "new health of h1: "<<h1.gethealth()<<endl;
    cout <<"new level of h1: "<<h1.getlevel()<<endl;



}