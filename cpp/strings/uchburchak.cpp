#include <iostream>
using namespace std;

bool is_triangle(float a, float b, float c)
{
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    cout << is_triangle(a, b, c);
}