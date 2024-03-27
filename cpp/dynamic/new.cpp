#include <iostream>
using namespace std;
int main()
{
    int a = 1; // this variable in STACK memory.

    // difference of dynamic and static allocation memory: you can store only one integer to the int type if you store about 4 billion in the int, even it may overflow, you can't store anymore.

    // but in the HEAP, using Pointers(dynamic allocation) you do not store a value, but address of it, anyway the value will stored in the HEAP, in its address, but you don't store it with pointers. You can store millions of adresses, not single one in integer.

    int *pointer = new int; // opened "pointer" variable in the STACK, and I'm giving permission to store value to the HEAP by "new int"(malloc in "C")

    *pointer = 3; // derefferencing, or like "hey pointer, go to that adress on the HEAP, then store 3", but you are storing address of that 3 in the "pointer" variable

    cout << pointer << endl; // expect the address
    cout << *pointer;        // expect the value in the address

    delete pointer; // YOU HAVE TO free when you're done with this memory in the HEAP.
    return 0;
}