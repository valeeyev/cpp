#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{

    string input = "";
    cin >> input;
    int length = input.length();

    for (int i = 0; i < length - 1; i++)
    {
        if (input[i] > input[i + 1])
        {
            printf("No\n");
            return 0;
        }
        else
            printf("Yes\n");
    }

    return 0;
}