#include<iostream>
using namespace std;

int main()
{
    int choice;
    double price;
    cout <<"select your choice: "<<endl;
    cout <<"1. Green Tea\n";
    cout << "2. Lemon Tea\n";
    cout <<"3. Masala Tea\n";
    cout <<"4.Garlic Tea\n";
    cout <<"Enter your choice in number: \n";
    cin >>choice;
    switch(choice){
        case 1:
            price=2.0;
            cout <<"You choice selected. price: "<<price<<endl;
            break;
        case 2:
            price=4.0;
            cout <<"You choice selected. price: "<<price<<endl;
            break;
        case 3:
            price=6.0;
            cout <<"You choice selected. price: "<<price<<endl;
            break;
        case 4:
            price=10.0;
            cout <<"You choice selected. price: "<<price<<endl;
            break;
        default:
            cout<<"Invalid choice";

    }
    return 0;
}