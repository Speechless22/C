#include<stdio.h>
int main()
{
    int day,month,year,sum;
    printf("请依次输入年、月、日：");
    scanf("%d,%d,%d",&year,&month,&day);    //年月日用逗号隔开
    switch(month)                           //计算该月之前天数
    {
        case 1:sum=0;break;
        case 2:sum=31;break;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;
        default:printf("data error");break;
    }
    if(year%400==0||(year%4==0&&year%100!=0)&&month>2){               //处理闰年
        sum=sum+day+1;
    }
    else{
        sum=sum+day;
    }
    printf("这天是%d年的第%d天",year,sum);
}