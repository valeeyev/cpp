#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
        cout << sum << endl;
    }
    cout << "0 dan n gacha sonlar yig'indisi: " << sum;
    return 0;
}