
#include <stdio.h>

int main(void)
{
    char *s = "Hi!";
    printf("%c", *s);
    printf("%c", *(s + 1));
    printf("%c", *(s + 2));
    printf("%c\n", *(s + 3));

    return 0;
}