#include <stdio.h>
main()
{
    int i, j, k, c;
    i = 0;
    j = 0;
    k = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++i;
        if (c == '\t')
            ++j;
        if (c == '\n')
            ++k;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", i, j, k);
}