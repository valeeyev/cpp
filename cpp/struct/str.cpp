#include <iostream>
using namespace std;

struct student
{
    string ism;
    string tel;
};

int main()
{
student kontakt[3];
for (int i = 0; i < 3; i++)
{
    cin >>kontakt[i].ism;
    cin>>kontakt[i].tel;
}

for (int j = 0; j < 3; j++)
{
    cout<<kontakt[j].ism<<"ning nomeri: "<<kontakt[j].tel;
    cout << endl;
}


}
