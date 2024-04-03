#include <iostream>
#include <string>
using namespace std;

struct mymethod
{
    string toLower(string word)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] += 32;
            }
        }
        return word;
    }
};

int main()
{
    mymethod myvar;

    string text = "SALOM";
    cout << text << endl;
    text = myvar.toLower(text);
    cout << text << endl;

    return 0;
}