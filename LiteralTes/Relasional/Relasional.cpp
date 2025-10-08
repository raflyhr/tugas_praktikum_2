#include <iostream>

using namespace std;

int main()
{
int a = 10;
int b = 9;

 cout << "Equal to: " << (a == b) << endl;
 cout << "Not equal to: " << (a != b) << endl;
 cout << "Greater than: " << (a > b) << endl;
 cout << "Less than: " << (a < b) << endl;
 cout << "Greater than or equal to: " << (a >= b) << endl;
 cout << "Less than or equal to: " << (a <= b) << endl;

 cout << "Logical AND: " << ((a < 5) && (b++ == 10)) << endl;
 cout << "a: " << a << ", b: " << b << endl;
 cout << "Logical OR: " << ((a > 5) || (b == 10)) << endl;
 cout << "a: " << a << ", b: " << b << endl;

 system("PAUSE");

return 0;
}