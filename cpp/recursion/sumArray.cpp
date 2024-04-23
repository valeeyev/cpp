#include <iostream>
using namespace std;

int summ(int arr[], int size){
    if(size == 0){
        return 0;
    }else{
        return arr[0] + summ(arr+1, size - 1);
    }
}

int main()
{
    int arr[3]={9, 4, 6};
    cout << summ(arr, 3);

    return 0;
}