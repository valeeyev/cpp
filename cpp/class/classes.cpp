#include <iostream>
using namespace std;

class myClass
{
public:
    void sayHell()
    {
        cout << "hell\n";
    }
};

int main()
{
    myClass myObj;

    myObj.sayHell();

    return 0;
}