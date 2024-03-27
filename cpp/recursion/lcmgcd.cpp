#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int a, b;
    cin >> a >> b;

    int res = gcd(a, b);
    cout << "Ekub " << res;
    cout << endl;
    int res1 = lcm(a, b);
    cout << "Ekuk " << res1;

    return 0;
}