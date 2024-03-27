#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: ./step.exe number\n");
        return 1;
    }
    int n = atoi(argv[1]);
    int arr[n];
    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - row - 1; space++)
        {
            printf(" ");
        }
        for (int col = 0; col <= row; col++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}