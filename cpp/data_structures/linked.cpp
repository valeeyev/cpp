#include <iostream>

// Define the node structure
struct Node
{
    int data;
    Node *next;

    // Constructor to initialize data and next pointer
    Node(int value) : data(value), next(nullptr) {}
};

// Function to display the linked list
void displayList(Node *head)
{
    while (head != nullptr)
    {
        std::cout << head->data << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main()
{
    // Creating nodes
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    // Connecting nodes
    head->next = second;
    second->next = third;

    // Displaying the linked list
    std::cout << "Linked List: ";
    displayList(head);

    // Clean up memory (not shown in the demo)
    // Delete nodes and free memory

    return 0;
}
