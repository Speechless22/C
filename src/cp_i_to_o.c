#include <stdio.h>

int main() // 复制输入到输出
{
    int c;
    
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        printf("((c = getchar()) != EOF) = %d\n", (c = getchar()) != EOF);
    }
}