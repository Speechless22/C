#include <stdio.h>
//复制输入到输出
main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        printf("((c = getchar()) != EOF) = %d\n", (c = getchar()) != EOF);
    }
}