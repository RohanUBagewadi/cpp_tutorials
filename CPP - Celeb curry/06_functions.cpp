#include <iostream>
#include <cmath> // input the library

using std::cout;
using std::cin;

int main()
{
    int base, exponent;
    
    cout << "Enter base:";
    cin >> base;
    
    cout << "Enter exponent:";
    cin >> exponent;
    
    double x;
    x = pow(base, exponent);
    // double x = pow(base, exponent);
    
    cout << x;
}