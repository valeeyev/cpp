#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
string a;
cin >> a;
string b = a;
b[0] = toupper(b[0]);
cout << a << endl<< b<<endl;
}
