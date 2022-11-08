#include <iostream>
using namespace std;

int main()
{
    // initializing the variable
    int money = 20;
    // initialize the ice-cream variable
    int icecream_price = 5;
    cout << "Initial Money = " << money << endl;
    cout << "Ice-cream Price = " << icecream_price << endl;
    // while loop
    while (money >= icecream_price)
    {
        cout << "buy an ice-cream" << endl;
        money -= icecream_price;
        cout << "remaining money = " << money << endl;
    }
    // end of while loop
    cout << "you cant buy another ice-cream" << endl;
    return 0;
}