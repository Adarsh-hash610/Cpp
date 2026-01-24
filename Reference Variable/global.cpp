#include<iostream>
using namespace std;

int score=15;

void a(int& i){
    i++;
    cout<<score<<" in function a"<<endl;
    score++;
}
void b(int& i){
    cout<< score<<" in function b"<<endl;
    cout << i;
}
int main()
{
    int i=5;
    cout<< score<< " in main function"<<endl;
    a(i);
    b(i);

}