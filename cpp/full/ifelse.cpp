#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " katta\n";
        }
        else
        {
            cout << c << " katta\n";
        }
    }
    else if (b > c)
    {
        cout << b << " katta\n";
    }
    else
    {
        cout << c << " katta\n";
    }

    return 0;
}