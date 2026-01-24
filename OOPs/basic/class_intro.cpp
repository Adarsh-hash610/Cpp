#include<iostream>
using namespace std;

class Hero{
    //properties...
    int health;
    char level;

};
int main()
{
    //creation of objects...
    Hero h1;
    cout <<"size of h1: "<<sizeof(h1)<<endl;
}
//Note: In case of empty class memory size is 1.

//Important: Read Padding and greedy alignment....