#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;


int main()
{
    string greeting = "Hello";
    int x;

    cout << greeting << std::endl;
    cout << greeting.length() << std::endl; // length of string
    cout << greeting.size() << std::endl; // size of string  both length and size are smae

    // apend or extend string
    greeting += " there!";

    greeting.append(", Rohan");
    cout << greeting << std::endl;

    //insert with position
    greeting.insert(3, "*******");
    cout << greeting << std::endl;

    //erase
    greeting.erase(3, 7);
    cout << greeting << std::endl;

    greeting.erase(5); //   if number of characters to be removed not specified it removes all after the specified position
    cout << greeting << std::endl;
    
    greeting.erase(greeting.length()-1); //   to remove last position
    //or 
    greeting.pop_back();
    cout << greeting << std::endl;

    //replace
    greeting.replace(0, 4, "Heaven"); // .replace(starting index, length, replacing string)
    cout << greeting << std::endl;

    greeting = "What the hell?";
    //searching in strings
    x = greeting.find("hell"); //returns the index
    cout << greeting.replace(x, 4, "****") << std::endl;

    // extracting sub strings
    cout << greeting.substr(5, 2) << std::endl; // (position, length)

    cout << greeting.find_first_of("aeiou") << std::endl; // (position, length)
    cout << greeting.find_first_of("!") << std::endl; // gives huge number if not found :: nps which is equal to -1
    //so
    if(greeting.find_last_of("!") == -1) cout << "NOT FOUND" << std::endl;

    //comparing strings
    greeting = "What the hell?";
    if(greeting != "Hello") cout << "Not Equals" << std::endl;
    //or
    if(greeting.compare("What the hell?") == 0) cout << "Equals" << std::endl; // .compare() returns zero if strings are equal
}
/*

//so, to get multiple lines from concole
int main()
{
    string greeting;

    getline(cin, greeting); //so, to get multiple lines
    cout << greeting << std::endl;

    // cin.getline() is used when numbers are to be inported as strings
}

*/