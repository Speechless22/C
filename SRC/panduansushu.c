//判断素数
#include<stdio.h>
int main()
{
    int i,x;
    printf("请输入一个正整数：");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            printf("%d不是素数",x);
            break;
        }
        if(i=x-1)
        {
            printf("%d是素数",x);
        }
    }
}