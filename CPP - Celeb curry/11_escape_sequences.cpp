 #include <iostream>
 #include <string>

 using std::cout;

 int main()
 {
    cout << "Hello\tthere"; // tab
    
    cout << "\n";
    cout << "Hello\bthere"; // balckslash- remove last character
    
    cout << "\n";
    cout << "Hello\nthere"; // next line
    
    cout << "\n";
    cout << "Hello\vthere"; // vertical tab
    
    cout << "\n";
    cout << "Hello\athere"; // for beep sound
    
    cout << "\n";
    cout << "Hello\0there"; // to specify the end of c-type string
    
    cout << "\n";
    cout << "Hello \"Rohan\""; // to specify double quotes
    
    cout << "\n";
    cout << "Hello 'Rohan'"; // to specify double quotes
   
    cout << "\n";
    cout << "\\"; // to put "\"
 }
