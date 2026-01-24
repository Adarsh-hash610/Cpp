#include<iostream>
using namespace std;

class Animal{
    public:
        int age=12;
        int weight;
    
    public:
        void speak()
        {
            cout << "Barking BHOW BHOW !!!!"<<endl;
        }
};

class Dog: public Animal{

};
int main()
{
    Dog d1;
    d1.speak();
    cout<< d1.age<<endl;
}