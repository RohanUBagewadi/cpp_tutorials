#include <iostream>
#include <climits> 

using std::cout;

int main()
{  // char uses single quote and double quotes is for strings
   char x = 'A';
   // cahr - 'A' has a decimal value of 65
   cout << x << std::endl;
   cout << (int) x << std::endl; // this static_casting of datatypes
}