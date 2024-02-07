#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name = "";
    cout << "ismingiz(kichik harflarda): ";
    cin >> name;

    int n = name.length();

    for (int i = 0; i < n; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            printf("%c", name[i] - 32);
        }
    }

    return 0;
}