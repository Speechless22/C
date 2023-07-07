#include <stdio.h>
main ()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            putchar(c);
        }
        else
        {
            putchar('\n');
        }
    }
}