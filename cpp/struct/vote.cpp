#include <iostream>
using namespace std;

const int NumOfStudents = 5;

struct User
{
    string name;
    int point;
};

void bubbleSort(User students[]);
void displayHighestScore(User students[]);

int main()
{
    User students[NumOfStudents];

    for (int i = 0; i < NumOfStudents; i++)
    {
        cout << "Name of Student " << i + 1 << ": ";
        cin >> students[i].name;

        cout << "Point of Student " << students[i].name << ": ";
        cin >> students[i].point;
        cout << endl;
    }

    bubbleSort(students);

    cout << "Sorted by Points:" << endl;
    for (int j = 0; j < NumOfStudents; j++)
    {
        cout << students[j].name << ": " << students[j].point << endl;
    }

    displayHighestScore(students);

    return 0;
}

void bubbleSort(User students[])
{
    for (int i = 0; i < NumOfStudents - 1; i++)
    {
        for (int j = 0; j < NumOfStudents - i - 1; j++)
        {
            if (students[j].point < students[j + 1].point)
            {
                User temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void displayHighestScore(User students[])
{
    cout << "Highest Score: " << students[0].name << " with " << students[0].point << " points" << endl;
}
