#include <iostream>
#include <ctype.h>
#include <iomanip>
using namespace std;

/*string changeMilitary(string before[], int length)
{
}*/

int main()
{
    string given = "";
    cin >> given;

    int length = given.size();

    for (int i = 0; i < length; i += 2)
    {
        cout << given.substr(i, 2);
        if (i + 2 < length)
        {
            cout << ':';
        }
    }

    cout << endl;

    cout << length;

    return 0;
}