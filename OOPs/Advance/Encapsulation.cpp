#include<iostream>
using namespace std;

class Hero{
    private:
        int age;
        string name;
        int height;
        
    public:
        int getAge(){
            return this->age;
        }

};
int main()
{
    Hero h1;

    cout << "Alright"<<endl;
}