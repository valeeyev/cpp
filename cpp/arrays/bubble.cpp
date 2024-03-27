#include <iostream>
using namespace std;
int main()
{
    int sort[] = {45, 12, 8, 23, 6, 4, 2, 35, 7, 8, 9, 0, 17, 99, 56, 37};
    int length = sizeof(sort) / sizeof(sort[0]);

    for (int i = 0; i < length; i++)
    {
        cout << sort[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (sort[j] > sort[j + 1])
            {
                swap(sort[j], sort[j + 1]);
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << sort[i] << " ";
    }
    cout << endl;

    return 0;
}
