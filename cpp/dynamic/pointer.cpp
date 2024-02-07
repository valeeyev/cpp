#include <iostream>
using namespace std;
int main()
{
	int* darray;
	int size;

	cout << "enter size: ";
	cin>>size;

	darray = new int[size];

	cout << "enter "<<size<<" elements\n";

	for(int i = 0; i < size; i++)
	{
	cin >>darray[i] ;
	
	}

	for(int j = 0; j < size; j++)
	{
		cout << darray[j]<<" ";
	}
	cout << endl;


delete[] darray;

return 0;
}
