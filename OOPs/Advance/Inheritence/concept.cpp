#include<iostream>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        public:
        int age;
        string name;
    public:
        int getAge(){
            return this->age;
        }
        // int getWeight(){
        //     return weight;
        // }

        void setWeight(int w){
            this->weight=w;
        }
};

class Male: public Human{
    public:
        string color;

    void sleep(){
        cout << "Man is sleeping"<<endl;
    }
};
int main()
{
    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
    object1.sleep();
    object1.setWeight(70);
    cout << object1.weight;
}