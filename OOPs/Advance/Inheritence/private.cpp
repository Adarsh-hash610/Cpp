#include<iostream>
using namespace std;

class Human{
    public:
        int height;
        int weight;
    private:
        int age;
    
    int getAge(){
        return this->age;
    }
};

class Male: private Human{
    public:
        string color;
    void sleep()
    {
        cout << "sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};
int main()
{
    Male m1;
    cout<<m1.getHeight();
}