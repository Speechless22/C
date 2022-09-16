#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=0;a<9;a++)
    {
        for(b=0;b<9;b++)
        {
            for(c=0;c<9;c++)
            {
                if(a!=b&&b!=c&&c!=a)
                printf("%d%d%d\n",a,b,c);
            }
        }
    }
}