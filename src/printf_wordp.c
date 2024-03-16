// 打印输入中各个字符出现频度的直方图
#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXHIST 15  // 直方图的最大长度
#define MAXCHAR 128 // 字符的最大值

int main()
{
    int c, i, nc, state;
    int len;         // 每个长度的长度
    int maxvalue;    // 最大的频度
    int cc[MAXCHAR]; // 字符频度的数组

    state = OUT;
    nc = 0; // 字符数

    for (i = 0; i < MAXCHAR; ++i)
        cc[i] = 0;

    while ((c = getchar()) != EOF)
        if (c < MAXCHAR)
            ++cc[c];

    maxvalue = 0;

    for (i = 1; i < MAXCHAR; ++i)
        if (cc[i] > maxvalue)
            maxvalue = cc[i];

    for (i = 1; i < MAXCHAR; ++i)
    {
        if (cc[i] > 0)
        {
            if ((len = cc[i] * MAXHIST / maxvalue) <= 0)
                len = 1;
        }
        else
            len = 0;

        printf("%5d - %5d : ", i, cc[i]);

        while (len > 0)
        {
            putchar('*');
            --len;
        }

        putchar('\n');
    }
}