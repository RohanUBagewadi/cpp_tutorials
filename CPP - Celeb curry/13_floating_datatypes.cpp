#include <iostream>
#include <float.h> // to increase the accuracy of numbers after decimal point
// since floats are not trustworthy then doubles i.e. accuracy is less

using std::cout;

int main()
{   // there are three types of floating type numbers
    float a;
    double b = 77000;  // or 7.7E4
    double c = 7.7E5;  // or 7.7E4
    float d = 10.0 / 3;
    d = d * 10000000000;
    long double e;

    cout << b << std::endl;
    cout << c << std::endl;
    cout << d << std::endl;
    cout << std::fixed << d << std::endl; // to convert scientific notation to flating point representation
    
    // since floats are not trustworthy then doubles i.e. accuracy is less
    cout << FLT_DIG << std::endl; // gives the number of digits that are trustworthy for 'float' i.e. 6 in this case
    cout << DBL_DIG << std::endl; // gives the number of digits that are trustworthy for 'double' i.e. 15 in this case
    cout << LDBL_DIG << std::endl; // gives the number of digits that are trustworthy for 'long double' i.e. 15 in this case
}

// use float variable where as doubles consumes more memory this might not be required but they are more precise than floats