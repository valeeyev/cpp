#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
    string str = "string";
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    int l = str.length() + 1;
    int k = 0;

    while (k <= l)
    {
        cout << cstr[k] << endl;
        k += 1;
    }
    // do stuff
    delete[] cstr;
}