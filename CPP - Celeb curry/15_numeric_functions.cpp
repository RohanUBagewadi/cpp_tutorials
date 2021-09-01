#include <iostream>
#include <cmath>

using std::cout;

int main()
{
    cout << sqrt(25) <<std::endl;
    cout << sqrt(-25) <<std::endl; // gives NaN number as result 
    cout << pow(9, 999) <<std::endl; // gives infinity as result
    cout << pow(-9, 999) <<std::endl; // gives infinity as result

    // these are like contants number can also be accessed directly
    cout << NAN << std::endl;
    cout << INFINITY << std::endl;

    cout << remainder(10, 3) << std::endl; //equivalent to modulus operator
    cout << remainder(10, 3.25) << std::endl; //equivalent to modulus operator but work with floating point numbers

    cout << 10 % 3 << std::endl; //equivalent to modulus operator but doest work with floating point numbers
    // cout << 10 % 3.5 << std::endl; //equivalent to modulus operator but doest work with floating point numbers


    cout << fmod(10, 3.25) << std::endl; //works similar to 'reminder' function

    cout << fmax(10, 3.25) << std::endl; //gives the max number of the arguments passed
    cout << fmin(10, 3.25) << std::endl; //gives the min number of the arguments passed

    cout << ceil(fmin(10, 3.25)) << std::endl; //rounds off to next interger value
    cout << floor(fmin(10, 3.25)) << std::endl; //rounds off to previous interger value by dropping the digits after decimal

    cout << trunc(fmin(10, 3.25)) << std::endl; //works similar to 'floor' only in case of +ve numbers
    
    // but for -ve numbers
    cout << trunc(-1.25) << std::endl; //works similar to 'floor' only in case of +ve numbers
    cout << floor(-1.25) << std::endl;

    cout << round(-1.5) << std::endl; //goes to closset numbers
    cout << round(-1.49) << std::endl; //goes to closset numbers

    cout << nearbyint(-2.5) << std::endl;
    cout << nearbyint(-2.49) << std::endl;   
}