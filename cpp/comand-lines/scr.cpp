#include <iostream>
#include <ctype.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int calc_point(string p1);

int main()
{
    string player1;
    string player2;

    cout << "Player1: ";
    cin >> player1;

    cout << "Player2: ";
    cin >> player2;

    int score1 = calc_point(player1);
    int score2 = calc_point(player2);

    if (score1 == score2)
        cout << "Tie!";
    else if (score1 > score2)
        cout << "Player1 wins\n";
    else
        cout << "Player2 wins\n";

    return 0;
}

int calc_point(string p1)
{
    int length = p1.size();
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int score = 0;
    int arr[] = {
        1,
        3,
        3,
        2,
        1,
        4,
        2,
        4,
        1,
        8,
        5,
        1,
        3,
        1,
        1,
        3,
        1,
        0,
        1,
        1,
        1,
        1,
        4,
        4,
        8,
        4,
        10,
    };
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (p1[i] == letters[j])
            {
                score += arr[j];
            }
        }
    }

    return score;
}