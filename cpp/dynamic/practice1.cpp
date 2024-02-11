/*Dynamic Array Basics:
Create a program that dynamically allocates an array of integers, takes user input to fill the array, and then prints the array.*/
#include <iostream>
using namespace std;
int main()
{
    // initalize size of array
    int size = 0;
    cin >> size;
    // pointer decloration
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << &arr << endl;
    for (int k = 0; k < size; k++)
    {
        cout << &arr[k] << endl;
    }

    delete[] arr;
    return 0;
}