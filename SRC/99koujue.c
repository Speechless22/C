//打印9*9乘法表
#include<stdio.h>
int main()
{
    int a,b,x;
    for(a=1;a<10;a++)
    {
        for(b=1;b<=a;b++)
        {
            x=a*b;
            printf("%d*%d=%-3d",a,b,x);     //-3d表示左对齐
        }
        printf("\n");   //b历遍一组后换行
    }
}