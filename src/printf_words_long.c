// 打印输入中单词长度的直方图
#include <stdio.h>

#define IN 1  // 在单词内
#define OUT 0 // 在单词外
#define MAXWORDLEN 10

int main()
{
    int c, i, j, state, nc, maxvalue;
    int nword[MAXWORDLEN + 1];

    state = OUT;
    nc = 0;

    for (i = 0; i <= MAXWORDLEN; ++i)
    {
        nword[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            if (nc > 0)
            {
                if (nc <= MAXWORDLEN)
                {
                    ++nword[nc];
                }
                else
                {
                    ++nword[0];
                }
            }
            nc = 0;
        }
        else if (state == OUT)
        {
            state = IN;
        }
    }

    maxvalue = 0;

    for (i = 0; i <= MAXWORDLEN; ++i)
    {
        if (nword[i] > maxvalue)
        {
            maxvalue = nword[i];
        }
    }

    for (i = 0; i <= MAXWORDLEN; ++i)
    {
        printf("%2d ", i);
        for (j = 0; j < nword[i]; ++j)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("maxvalue = %d\n", maxvalue);
}