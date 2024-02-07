#include <iostream>
using namespace std;
const int N = 10; // o'zgarmas global o'zgaruvchi(c/c++)

int summa(int jami[]);

int main(){
    int massiv[N];
    int summ = 0; // summ ning qiymatini 0 ga tenglash shart
    
    //avval massivning elementlarini kiritib olamiz

    for (int i = 0; i < N; i++)
    {
        cin>> massiv[i];        
    }
     
    for (int i = 0; i < N; i++)
    {
        summ+= massiv[i];
    }
    
    printf("massivning elementlarining umumiy yigindisi: %i \n", summa(massiv));

    return 0;
}

int summa(int jami[]){
    int summ = 0;

    for (int j = 0; j < N; j++)
    {
        summ+=jami[j];
    }
    return summ;
    
}