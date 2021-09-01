#include <iostream>
#include <cmath> // input the library

using std::cout;
using std::cin;

double power(double base, int exponent)  
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

// void functions doesn't return any values

void print_power(double base, int exponent)
{
    double x;
    x = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << x;
}

int main()
{
    double base;
    int exponent;
    
    cout << "Enter base:";
    cin >> base;
    
    cout << "Enter exponent:";
    cin >> exponent;
    
    print_power(base, exponent);
}