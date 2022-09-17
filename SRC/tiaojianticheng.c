//计算条件提成
#include<stdio.h>
int main()
{
    double i,m;
    printf("请输入利润：");
    scanf("%lf",&i);
    if(i<=100000){
        m=i*0.1;
    }else if(i<=200000){
        m=(i-100000)*0.075+10000;
    }else if(i<=400000){
        m=(i-200000)*0.05;
    }else if(i<=600000){
        m=(i-400000)*0.03;
    }else if(i<=1000000){
        m=(i-600000)*0.015;
    }else{
        m=(i-1000000)*0.01;
    }
    printf("提成为：%lf元",m);
    return 0;

}