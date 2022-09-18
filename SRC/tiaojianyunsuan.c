//条件运算符的嵌套
#include<stdio.h>
int main()
{
    int score;
    char grade;
    printf("请输入分数：");
    scanf("%d",&score);
    if(score<0){
        printf("分数输入错误");
        return 0;
    }
    grade=(score>=90)?'A':((score<60)?'C':'B');
    printf("分数等级为：%c",grade);
}