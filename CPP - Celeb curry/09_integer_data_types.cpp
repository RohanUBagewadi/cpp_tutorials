#include <iostream>
#include <climits> 

using std::cout;

int main()
{   // there are 8 integral datatypes
    
    short a; // 8 bit
    int b; // 16 bit
    long c; // 32 bit
    long long d; // 64 bit
    // short <= int <= long <= long long

    // only positive values
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    // to find out memory occupyed by datatypes: 
    cout << sizeof(long) << std::endl; // outputs interms of bit values i.e 2 power 8
    cout << sizeof(int) << std::endl; // outputs interms of bit values

    // to find out max number occupyed by datatypes: 
    cout << SHRT_MAX << std::endl;
    cout << USHRT_MAX << std::endl; //U_ for unsigned numbers
    cout << ULONG_MAX << std::endl; //U_ for unsigned numbers
}