#include<iostream>
using namespace std;

class Animal{
    public:
        int height;
        int age;
    
    public:
        void bark()
        {
            cout << "Dog is barking"<<endl;
        }
};

class Human{
    public:
        string color;
    void speak()
    {
        cout <<"Human is speaking"<<endl;
    }
};

// Multiple Inheritance....
class Hybrid: public Animal,public Human{

};
int main()
{
    Hybrid h1;
    h1.speak();
    h1.bark();

    return 0;
}