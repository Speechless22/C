#include <stdio.h>

int main() // 当celsius=0,20,40,...,300时，分别打印华氏温度与摄氏温度对照表
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   // 温度表的下限
    upper = 300; // 温度表的上限
    step = 20;   // 步长
    celsius = lower;

    printf("Celsius\tFahrenheit\n");

    while (celsius <= upper)
    {
        fahr = celsius * 9.0 / 5.0 + 32.0;
        printf("%6.0f\t%7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}