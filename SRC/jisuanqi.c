#include<stdio.h>
int main()
{
    float a,b,c;
    char x;
    printf("输入算式：");
    scanf("%f%c%f",&a,&x,&b);
    switch (x)
    {
    case '+':
        c=a+b;
        printf("%f+%f=%f",a,b,c);
        break;
    case '-':
        c=a-b;
        printf("%f-%f=%f",a,b,c);
        break;
    case '*':
        c=a*b;
        printf("%f*%f=%f",a,b,c);
        break;
    case '/':
        c=a/b;
        printf("%f/%f=%f",a,b,c);
        break;
    default:
        printf("输入格式有误");
        break;
    }
    return 0;
}