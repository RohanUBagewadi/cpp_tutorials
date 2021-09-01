#include <iostream>

using std::cout;

int main()
{   // generaly bool datatypes are used as flag variables
    bool pizza_status_1 = 1;
    bool pizza_status_2 = -1;  // -1 are also considered as True values only 0 is considerd as False
    bool pizza_status_3 = 0; 
    bool pizza_status = true; 

    cout << pizza_status_1 << std::endl;
    cout << pizza_status_2 << std::endl;
    cout << pizza_status_3 << std::endl;

    if (pizza_status)
    {
        cout << "Pizza was good" << std::endl;
    }

    // using manipulator to print 'True' 'False'
    cout << "Pizza was good? " << std::boolalpha << pizza_status << std::endl;
}