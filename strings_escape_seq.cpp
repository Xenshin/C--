#include<iostream>
using namespace std;

int main()
{
    //initialize a string variable
    string text1 = "hi ElectriX#5007";
    string text2 = "hello\nI\tam\tjohn";
    float number;
    char operand1 = 'n';
    char operand2 = 'C';
    //displaying 
    cout << text1 << endl;
    cout << text2 << endl;
    cout << "please enter your number: " << endl;
    cin >> number;
    cout << "you have entered the number " << number << endl;
    cout << "Division = " << operand1/operand2 << endl;
    cout << "Modulus = " << operand1 % operand2 << endl;    
}