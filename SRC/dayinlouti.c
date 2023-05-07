//打印楼梯
#include<stdio.h>
int main()
{
    int a,b;
    printf("\1\1\n");
    for(a=1;a<11;a++){
        for(b=1;b<=a;b++)
            printf("%c%c",219,219);
        printf("\n");
    }
}
