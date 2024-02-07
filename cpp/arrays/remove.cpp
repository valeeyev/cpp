#include <iostream>
using namespace std;
const int length = 10;
int copyArray(int massiv1[], int massiv2[], int length)
{
    for (int i = 0; i < length; i++)
    {
        massiv2[i] = massiv1[i];
    }

    for (int k = 0; k < length; k++)
    {
        cout << massiv2[k] << " ";
    }
}

int main()
{
    int massiv1[length];
    int massiv2[length];
    cout << "input: ";
    for (int j = 0; j < length; j++)
    {
        cin >> massiv1[j];
    }

    cout << "copy: ";

    copyArray(massiv1, massiv2, length);

    return 0;
}