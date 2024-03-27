#include <iostream>
using namespace std;
const int N = 10;

void printMassiv(int massiv[], int length){
    for (int i = 0; i < length; i++)
    {
        cout<< massiv[i] <<" ";
    }
    
}

void reversMassiv(int massiv[], int start, int end)
{
    while (start < end)
    {
    int temp = massiv[start];
    massiv[start] =  massiv[end];
    massiv[end] = temp;
    start++;
    end--;
    }
    
}

int main(){
    int massiv[N];
    int length = N; 

    for (int j = 0; j < length; j++)
    {
        cin>> massiv[j];
    }
    // 
    cout<< "avvalgi holati: \n";
    printMassiv(massiv, length);
    cout<<endl;
    //
    cout<<"Reverslangan Massiv: \n"; 
    reversMassiv(massiv, 0, length-1);
    printMassiv(massiv, length);
    // 
    return 0;
}
