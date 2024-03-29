#include <stdio.h>

int main() // 当fahr=0,20,40,...,300时，分别打印华氏温度与摄氏温度对照表
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   // 温度表的下限
    upper = 300; // 温度表的上限
    step = 20;   // 步长
    fahr = lower;

    printf("Fahrenheit\tCelsius\n");

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}