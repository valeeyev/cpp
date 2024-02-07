#include <iostream>
using namespace std;

const int N =10;

int largest(int element[]);
int main(){
    int massiv[N];

    for(int i = 0; i < N; i++){

        cin >> massiv[i];

    }
    printf("Massivdagi eng katta element; %i \n", largest(massiv));
}

int largest(int element[]){
    int larg = element[0];

    for (int j = 0; j < N; j++)
    {
        if (element[j] > larg)
        {
            larg=element[j];
        }
        
    }
    
    return larg;
}