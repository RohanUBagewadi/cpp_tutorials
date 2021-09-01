#include <iostream>

using std::cout;

int main()
{   
    int x;
    x = 5 + 5; //expression
    x = 5 * 5; 
    
    double y = 10 / 4; //integer division
    cout << y << std::endl;

    double z = 10. / 4;
    cout << z << std::endl;

    x = 10 % 6; // remminder
    cout << x << std::endl;

    // operations happens by precedence values
    x = 10 + (6.0 / 4);
    cout << x << std::endl;

    double p;
    double q;
    p = 10;
    q = (p = 100);
    cout << p << "\t" << q << std::endl;
    (q = p) = 100;
    cout << p << "\t" << q << std::endl;
}