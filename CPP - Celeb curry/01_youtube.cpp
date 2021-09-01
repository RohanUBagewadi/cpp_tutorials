#include <iostream>
int main() //main function
{
    std::cout << "Hello World\n";
    return 0;
}



#include <iostream>

using namespace std; //using directive

int main() //main function
{
    cout << "Hello World\n";
    return 0;
}


#include <iostream>

using std::cout; //using declaration - bring only cout inside - now, declared globaly

int main() //main function
{
    cout << "Hello World\n";
    return 0;
}