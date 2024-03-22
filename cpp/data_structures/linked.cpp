#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int node_data;
    node *next;
};

int main(int argc, char *argv[])
{
    node *head = nullptr;
    for (int i = 1; i < argc; i++)
    {
        int data = atoi(argv[i]);
        node *list = new node;
        list->node_data = data;
        list->next = head;
        head = list;
    }
    node *ptr = head;
    while (ptr != 0)
    {
        cout << ptr->node_data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    // delete
    while (head != nullptr)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}