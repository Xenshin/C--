#include<iostream>
using namespace std;

int main()
{
    long a = false;
    int b = 'C';
    cout << "variable a = " << a << endl; // long is automatically takes the false as bool and returns 0
    cout << "variable b = " << b << endl; // character 'C' is converted to its ACII equivalent numeric
    return 0;
}