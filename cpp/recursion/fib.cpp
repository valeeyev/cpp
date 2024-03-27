#include <iostream>
using namespace std;

int fib(int a)
{
    if (a <= 1)
    {
        return a;
    }
    else
        return fib(a - 1) + fib(a - 2);
}

int main()
{
    int a;
    cout << "a = ";
    cin >> a;
    cout << "Fibonachi ketma-ketligi: " << fib(a);
    return 0;
}