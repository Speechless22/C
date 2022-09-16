#include<stdio.h>
int main()
{
    int x,y,z,m;
    printf("输入三个整数：");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>y){
        m=x;x=y;y=m;
    }
    if(x>z){
        m=x;x=z;z=m;
    }
    if(y>z){
        m=y;y=z;z=m;
    }
    printf("从小到大排序为：%d<%d<%d",x,y,z);
}