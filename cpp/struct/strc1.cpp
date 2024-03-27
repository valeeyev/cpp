#include <iostream>
#include <ctype.h>
using namespace std;

struct contact
{
    string name, number;
};

contact arr[] = {{"Azamat", "+99 123 89 69"},
                 {"Barkamol", "99 458 23 63"},
                 {"Alisher", "90 652 47 87"}};

int main()
{
    string ism;
    cout << "ismni kiriting: ";
    cin >> ism;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i].name == ism)
        {
            cout << arr[i].name << "ning raqami: " << arr[i].number << endl;
            return 0;
        }
    }
    cout << "Topilmadi\n";

    return 0;
}