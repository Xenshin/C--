#include <iostream>
using namespace std;

int main ()
{
    int money = 10;
    string result;
    result = (money >=20) ? "you can gift a watch" : "you can gift a pen";
    cout << result;
    return 0;
}