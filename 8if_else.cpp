#include <iostream>
using namespace std;

int main()
{
    int money = 4;
    // if condition
    if (money >=20)
    {
        // if body
        cout << "you can gift a watch" << endl;
    }
    else if (money >= 5)
    {
        cout << "you can gift a pen" << endl;
    }
    else 
    {
        cout << "you cant gift anything" << endl;
    }
    return 0;
}