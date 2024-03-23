#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int number;
    node *next;
};

int main(int argc, char *argv[])
{
    node *head = nullptr;
    for (int i = 1; i < argc; i++)
    {
        int data = atoi(argv[i]);
        node *theNode = new node;
        theNode->number = data;
        theNode->next = head;
        head = theNode;
    }
    cout << "list: ";
    node *print = head;
    while (print != nullptr)
    {
        cout << print->number << " ";
        print = print->next;
    }

    return 0;
}
