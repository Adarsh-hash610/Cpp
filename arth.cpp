#include<iostream>
using namespace std;

int main()
{
    int cups;
    double pricepercups,totalprice,discountedprice;
    cout <<"Enter the number of tea cups: ";
    cin >>cups;
    cout <<"Enter the price per cups: ";
    cin>>pricepercups;
    totalprice=cups*pricepercups;

    // apply 5% discount if total price is above 100 rupees

    if(totalprice>100)
    {
        discountedprice=totalprice-(totalprice*0.05);
        cout << "discounted Price is: "<<discountedprice;
    }
    else{
        cout << "Total price is: "<<totalprice;
    }
    return 0;
}