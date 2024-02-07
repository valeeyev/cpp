#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n % 3 == 0)
    {
        if (n % 5 == 0)
        {
            cout << "fizbuz\n";
        }
        else
        {
            cout << "fizz\n";
        }
    }
    else if (n % 5 == 0)
    {
        cout << "buz\n";
    }

    return 0;
}