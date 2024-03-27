#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int *n = new int(a);

    cout << "pointer itself " << n << endl;
    cout << "pointer address " << &n << endl;
    cout << "variable address " << &a << endl;
    cout << "value inside  " << *n << endl;
    delete n;
    return 0;
}