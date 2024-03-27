#include <iostream>
using namespace std;
int main()
{

    int *n = new int(45);

    *n = 5;
    cout << n << endl
         << *n << endl;
    delete n;
    return 0;
}