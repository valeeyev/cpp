#include <iostream>
using namespace std;
const int N = 10;

float avarage(int element[]);

int main()
{
    int massiv[N];
    for (int i = 0; i < N; i++)
    {
        cin >> massiv[i];
    }
    
    printf("Massiv elementlarining o'rta arifmetigi: %f \n", avarage(massiv));

}

float avarage(int element[]){
    int result = 0;

    for(int j = 0; j < N; j++){
        result += element[j];
    }
    return result / (float) N;
}
