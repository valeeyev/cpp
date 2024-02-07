#include <iostream>
using namespace std;
void Swap(int *a, int *b);
int main()

{
    int x = 4, y = 6;
    cout << x << y << endl;
    Swap(&x, &y);
    cout << x << y << endl;

    return 0;
}

void Swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}