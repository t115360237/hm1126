#include <stdio.h>

#define SIZE 80

void stringReverse(const char s[]);

int main(void)
{
    char s[SIZE];

    printf("Enter a string: ");
    fgets(s, SIZE, stdin);

    stringReverse(s);
    printf("\n");

    return 0;
}

void stringReverse(const char s[])
{
    if (s[0] == '\0')
    {
        return;
    }

    stringReverse(&s[1]);
    printf("%c", s[0]);
}
