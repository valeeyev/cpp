#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string data;
    cout<<"nima yeding bugun";
    cin >> data;
    ofstream file("ovqat.txt");
    file<<data;
    file.close();
    return 0;
}