#include <iostream>
using namespace std;

int rec(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return 1 + rec(n / 2);
    }
    else if (n % 2 != 0)
    {
        return 1 + rec(3 * n + 1);
    }
}

int main()
{
    int num = 0;
    cin >> num;
    cout << endl;

    int resul = rec(num);
    cout << resul;

    return 0;
}