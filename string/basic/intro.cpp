#include<iostream>
#include<string>

using namespace std;

int main()
{
    string favourieTea= "Lemon Tea\n";
    string description= "Known as \"best\" Tea";
    cout << favourieTea<< description <<endl;
    string userTea;
    int teaQuantity;
    cout << "What do you like to order in Tea?\n";
    getline(cin,userTea);
    // ask for Quantity
    cout << "How many cups of "<<userTea<<" would you like to order?\n";
    cin >> teaQuantity;
    cout <<teaQuantity ;
    cout << userTea;
    return 0;
}