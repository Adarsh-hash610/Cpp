// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=1;
//     int b=2;

//     if(a-- >0 || ++b >2)
//     {
//         cout << "stage 1---> inside if" << endl;
//     }
//     else{
//         cout << "stage 2---> inside else" << endl;
//     }
//     cout << a <<" " << b << endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int num=3;
//     cout << (25*(++num)) << endl;
// }

#include<iostream>
using namespace std;

int main()
{
    int a=1;
    int b=a++;
    int c=++a;

    cout << b <<endl;
    cout << c<< endl;

}