#include <iostream>
using namespace std;

int main()
{
    // initialize variable grade
    char grade = 'C';
    // switch statement
    switch (grade)
    {
        case 'A':
            cout << "Exceptional Performance";
            break;
        case 'B':
            cout << "Well Done";
            break;
        case 'C':
            cout << "good";
            break;
        case 'D':
            cout << "you need to do more hardwork";
            break;
        case 'F':
            cout << "Fail";
            break;
        default:
            cout << "invalid output";
    }
    return 0;
}