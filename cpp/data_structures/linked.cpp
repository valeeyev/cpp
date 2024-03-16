#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int list_number;
    node *next;
};

int main(int argc, char *argv[])
{
    node *list = nullptr;

    for (int i = 1; i < argc; i++)
    {
        // get values from comand line to the number field of node
        int number = atoi(argv[i]); // now the input data is int type
        node *n = new node;         // create temporary pointer to pop linked list
        if (n == nullptr)
        {
            // freeing
            return 1;
        }
        n->list_number = number;
        n->next = list;
        list = n;
    }
    node *p = list;
    while (list != nullptr)
    {
        cout << p->list_number;
        p = p->next;
    }

    return 0;
}