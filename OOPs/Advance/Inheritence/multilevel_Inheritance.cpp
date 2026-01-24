#include<iostream>
using namespace std;

class Animal{
    public:
        int age=12;
        int weight;
    public:
        void speak()
        {
            cout << "BHOW BHOW!!!"<<endl;;
        }
};

class Dog: public Animal{

};

class GermanShepherd: public Dog{
    
};

int main()
{
    GermanShepherd g1;
    g1.speak();
    cout <<"age of German Shepherd is: "<< g1.age<<endl;

    return 0;
}