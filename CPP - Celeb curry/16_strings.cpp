#include <string> 
#include <iostream>

int main()
{ 
    std::string greeting = "Hello";
    std::cout << greeting[0] << std::endl;

    std::string greeting_0; // is an empty string when nothing defined i.e. ""
    std::cout << greeting_0 << std::endl;

    // string concatinations
    std::cout << greeting + " there" << std::endl;

    std::string complete_greeting = greeting + " Rohan";
    std::cout << complete_greeting << std::endl;

    // string clas methods
    std::cout << complete_greeting.length() << std::endl;  // number of charaters in string

    char name[] = "caleb"; // c-string == array of characters and its size cannot be changed

    complete_greeting = "Go away";

    // user input for string
    std::cin >> greeting; // Enter "Hello there!"
    std::cout << greeting << std::endl; // inputs only the first world i.e stops at wwhite space

}