#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{

    string n_ames[] = {"Barkamol", "Azamat", "Aziz"};
    string nums[] = {"+99891 159 59 59", "+99890 261 15 15", "+99899 315 26 26"};
    string name = "";
    cin >> name;
    for (int i = 0; i < 3; i++)
    {
        if (n_ames[i] == name)
        {
            cout << n_ames[i] << "ning raqami: " << nums[i] << endl;
            return 0;
        }
    }
    cout << "Topilmadi!\n";

    return 1;
}