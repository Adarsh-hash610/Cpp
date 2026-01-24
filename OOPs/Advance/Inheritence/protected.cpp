#include<iostream>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;
    private:
        string name;

    public:
        int getAge(){
            return this->age;
        }

};

class Male:protected Human{
    public:
        string color;
    int getHeight(){
        return this->height;
    }
    int getAge(){
            return this->age;
        }
};
int main()
{
    Male h1;
    cout << h1.getHeight()<< endl;
    cout << h1.getAge()<<endl;
}

// Protected members ko class ke andr hi access kr skte haii...