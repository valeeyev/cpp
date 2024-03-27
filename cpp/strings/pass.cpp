#include <iostream>
#include <ctype.h>
#include <iomanip>

using namespace std;

int main()
{
    string given = "";
    cin >> given;
    int length = given.size();
    for (int i = 0; i < length; i++)
    {
        if (given[i] == ':')
        {
            continue;
        }
        cout << given[i];
    }

    return 0;
}
