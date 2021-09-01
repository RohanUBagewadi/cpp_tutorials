#include <iostream>
#include <cmath> // input the library

using std::cout;
using std::cin;

double power(double base, int exponent)  // function defined type should be same as function return variable type
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result; // function defined type should be same as function return variable type
                   // double power == return result
}

int main()
{
    double base;
    int exponent;
    
    cout << "Enter base:";
    cin >> base;
    
    cout << "Enter exponent:";
    cin >> exponent;
    
    double x;
    x = power(base, exponent);
    // double x = pow(base, exponent);
    
    cout << x;
}