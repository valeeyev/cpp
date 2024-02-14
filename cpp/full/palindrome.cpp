#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int b, u, y, m;

    b = n % 10;
    u = (n % 100) / 10;
    y = (n / 100) % 10;
    m = n / 1000;

    if ((b == m) && (u == y))
    {
        cout << "palindrom\n";
    }
    else
    {
        cout << "no \n";
    }

    return 0;
}