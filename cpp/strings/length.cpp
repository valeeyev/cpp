#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name = "";
    cin >> name;

    int n = name.length();
    // while (name[n] != '\0')
    // {
    //     n++;
    // }

    printf("%i\n", n);

    return 0;
}