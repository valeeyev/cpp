#include <iostream>
using namespace std;
int main()
{
    int a = 4;

    int *b = new int;
    *b = 10;

    cout << a << endl;
    cout << b << endl;
    cout << *b << endl;

    return 0;
}