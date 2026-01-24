//Destructor are use to deallocate the memory...
#include<iostream>
using namespace std;

class Hero
{
    public:
    int health;
    char level;
    Hero(){
        cout << "Simple Constructor called"<<endl;
    }

    //destructor..
    ~Hero(){
        cout << "Destructor called"<< endl;
    }
};


int main()
{
    //static allocation...
    Hero h1;

    //dynamic allocation...
    Hero *h2= new Hero();
    delete h2;

}

// for dynamic allocation we have to manually create a destructor and in case of 
// static allocation destructors are automatically created... 

// also destructors are only called once at the time of deallocation...