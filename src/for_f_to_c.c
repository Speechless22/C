#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() // 当fahr=0,20,40,...,300时，分别打印华氏温度与摄氏温度对照表
{
    float fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%6.1f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}