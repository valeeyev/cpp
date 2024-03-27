#include <iostream>
using namespace std;
const int length = 10; // global constanat o'zgauvchi
void bubbleSort(int massiv[], int length)
{
    for (int j = 0; j < length - 1; j++)
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (massiv[i] > massiv[i + 1])
            {
                int temp = massiv[i];
                massiv[i] = massiv[i + 1];
                massiv[i + 1] = temp;
            }
        }
    }

    cout << "Tartiblangan massiv: \n";
    for (int i = 0; i < length; i++)
    {
        cout << massiv[i] << " ";
    }
    cout << endl;
}

int binarQidiruv(int tartiblanganArray[], int target)
{
    int boshi = 0;
    int oxiri = length - 1;
    while (boshi <= oxiri)
    {
        int urta = (boshi + oxiri) / 2;
        if (tartiblanganArray[urta] == target)
        {
            return urta;
        }
        else if (tartiblanganArray[urta] < target)
        {
            boshi = urta + 1;
        }
        else
        {
            oxiri = urta - 1;
        }
    }
}

int main()
{
    int massiv[length];
    cout << "massivning elementlarini kiriting: \n";
    for (int i = 0; i < length; i++)
    {
        cin >> massiv[i];
    }
    cout << endl;

    bubbleSort(massiv, length);

    int target = 0;
    cout << "Qidirilayotgan sonni kiriting: \n";
    cin >> target;

    int natija = binarQidiruv(massiv, target);
    cout << target << " soni " << natija << " inchi indexda \n";
    return 0;
}