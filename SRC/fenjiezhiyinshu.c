//将一个正整数分解质因数
#include<stdio.h>
int main()
{
    long long int n,i;
    printf("请输入一个正整数：");
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2;i<=n;i++)
    {
        while (n%i==0)
        {
            printf("%d",i);
            n=n/i;
            if(n!=1) printf("*");
        }
        
    }
}