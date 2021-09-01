#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

/*

int main()
{
    string greeting;
    string left_over;

    cin >> greeting; // Enter "Hello there!"
    cin >> left_over;

    cout << greeting << std::endl; // inputs only the first world
    cout << left_over << std::endl; 
}

*/


//so, to get multiple lines from concole
int main()
{
    string greeting;

    getline(cin, greeting); //so, to get multiple lines
    cout << greeting << std::endl;

    // cin.getline() is used when numbers are to be inported as strings
}