#include<iostream>
using namespace std;

class Hero{
    int health;
    char level;
    public:
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }
    char getlevel(){
        return level;
    } 
    void setlevel(char l){
        level=l;
    }
};
int main()
{
    //statically allocated....
    Hero h1;
    h1.setHealth(70);
    h1.setlevel('A');

    cout <<"Health of h1: "<<h1.getHealth()<<endl;
    cout <<"Level of h1: "<<h1.getlevel()<<endl;

    //dynamically allocated...
    Hero *h2= new Hero;
    h2->setHealth(80);
    h2->setlevel('A');
    cout << "health of h2: "<<(*h2).getHealth()<<endl;
    cout << "level of h2: "<<(*h2).getlevel()<<endl;

    //another way to print dynamically allocated method...
    cout << "health of h2: "<< h2->getHealth()<<endl;
    cout << "level of h2: "<< h2->getlevel()<<endl;

}