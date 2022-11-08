#include <iostream>
using namespace std;

int main()
{
    int money = 6;
    switch (money)
    {
        case 20 ... 100:
            cout << "you can gift a watch";
            break;
        case 10 ... 19:
            cout << "you can gift a comic book";
            break;
        case 5 ... 9:
            cout << "you can gift a chocolate";
            break;
        default:
            cout << "you can gift a pen";
    }
    return 0;
}