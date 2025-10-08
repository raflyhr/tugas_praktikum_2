#include <iostream>

using namespace std;

int main()
{
char a = 10;
char b = 3;

 cout << "Addition: " << (a + b) << endl; // Addition
 cout << "Subtraction: " << (a - b) << endl; // Subtraction
 cout << "Multiplication: " << (a * b) << endl; // Multiplication
 cout << "Division: " << (a / b) << endl; // Division
 cout << "Modulus: " << (a % b) << endl; // Modulus
 cout << "Increment: " << (++a) << endl; // Increment
 cout << "Decrement: " << (--b) << endl; // Decrement
 cout << "Compound Addition: " << (a += 5) << endl; // Compound Addition
 cout << "Compound Multiplication: " << (b *= 2) << endl; // Compound Multiplication

 system("PAUSE");

return 0;
}