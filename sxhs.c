//水仙花数
#include <stdio.h>
int main()
{
    int a, b, c, n;
    printf("result is:");
    for( n=100; n<1000; n++ )  /*整数的取值范围*/
    {
        a = n / 100;
        b = (n-a*100) / 10;
        c = n % 10;
        if(n == a*a*a + b*b*b + c*c*c)  /*各位上的立方和是否与原数n相等*/
            printf("%d  ", n);
    }
    printf("\n");
   
    return 0;
}