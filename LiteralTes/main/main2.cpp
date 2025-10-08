#include <iostream>
#include <string>

using namespace std;

int main()
{
    //  integer leterals
    int dec = 5.8;       // decimal literal
    int oct = 052;      // octal leteral (base 8)
    int hex = 0x2a;     // hexadecimal literal (base 16)
    int bin = 0b101010; // binary literal (base 2)

    // floating point literals
    double pi = 3;
    float e = 2.71828f;
    long double golden = 1.61803398874989484820;

    // charakter literals
    char letter = 'A'; // chrakter literal
    char newline = '\n'; // escape sequence for newline

    // string literals
    const string greeating = "hello, world!";
    // boolean literals
    bool isTrue = true;   // boolean literal true 
    bool isFalse = false; // boolean literal false
    
    //  qotput the values
    cout << "int: " << dec << ", " << oct << ", " << hex << ", " << bin << endl;
    cout << "float: " << pi << ", " << e << ", " << golden << endl;
    cout << "char: " << letter << endl;
    cout << "string " << greeating << endl;
    cout << "boolean: " << isTrue << ", " << isFalse << endl;
    system("pause");
    return 0;
}