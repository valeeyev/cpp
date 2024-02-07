#include <stdio.h>

int main(void)
{
    const char *c = "Hi!";

    // Print the address of the char* (pointer to the first element)
    printf("Address of char*: %p\n", (const void *)c);

    // Print the address of the first element
    printf("Address of the first element: %p\n", (const void *)&c[0]);

    // Print the first character
    printf("First character: %c\n", c[0]);

    return 0;
}
