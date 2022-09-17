//打印国际象棋棋盘
#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<8;a++){
        for(b=1;b<8;b++)
        {
            if((a+b)%2==0){
                printf("%c%c",219,219);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}