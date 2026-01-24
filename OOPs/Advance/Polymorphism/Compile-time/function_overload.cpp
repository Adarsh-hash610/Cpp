#include<iostream>
using namespace std;

class A{

    public:
    void sayHello()
    {
        cout << "Hello I am Adarsh"<<endl;
    }

    void sayHello(string name){
        cout << "Hello I am "<< name<<endl;
    }
    void sayHello(string name,int age)
    {
        cout << "I am  "<< name<< " and my age is "<< age <<endl;
        
    }
};
int main()
{
    A obj1;
    obj1.sayHello();
    obj1.sayHello("Aman");
    obj1.sayHello("Chaman",20);

    return 0;
}

//Function overloading:--   It is of two types-
// 1). Function overloading with different number of arguments.
// 2). Function overloading with different types of arguments.