#include<stdio.h>
//当fahr=0,20,40,...,300时，分别打印华氏温度与摄氏温度对照表
main()
{
    float fahr;
    for (fahr =300; fahr >= 0; fahr = fahr - 20)
        printf("%6.1f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}