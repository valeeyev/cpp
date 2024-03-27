#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> name = {1, 3, 4, 5};

    for (auto i = name.begin(); i != name.end(); i++)
    {
        cout << "i- element " << *i
             << endl;
    }
    cout << endl;

    return 0;
}