#include <iostream>

using std::cout;
using std::cin;

// user input

int main() //main function
{
    int slices;
    cout << "Enter how many pieces of pizza you ate?" << std::endl;
    cin >> slices;
    slices = slices + 1;
    cout << "You have " << slices << " slices of pizza" << std::endl;
}