#include <iostream>
#include <ctype.h>
using namespace std;

string timeConversion(string s)
{
    int length = s.size();

    string res_s;

    if (s[length - 2] == 'P')
    {
        if (s.substr(0, 2) != "12")
        {

            string hour_str = s.substr(0, 2);
            int hour = stoi(hour_str);
            hour += 12;
            s[0] = (hour / 10) + '0';
            s[1] = (hour % 10) + '0';
        }
    }
    else if (s.substr(0, 2) == "12")
    {

        s[0] = '0';
        s[1] = '0';
    }

    res_s = s.substr(0, length - 2);

    return res_s;
}

int main()
{
    string before;
    cin >> before;

    string res = timeConversion(before);

    cout << res;

    return 0;
}