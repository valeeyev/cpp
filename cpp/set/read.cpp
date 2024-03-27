#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string data;
    getline(cin, data);
    int gap = 0, word = 0;
    for (int i = 0; i < data.length(); i++)
    {
        if (data[i] == '.' || '!')
        {
            gap++;
        }
        if (data[i] == ' ')
        {
            word++;
        }
    }

    cout << gap << endl
         << word;

    return 0;
}