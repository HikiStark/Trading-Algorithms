#include <stdio.h>
#include <math.h>

float compoundingfunc(float inBalance, float percentage)
{
    float finBalance;
    finBalance = ((inBalance * percentage) / 100.0) + inBalance;
    return finBalance;
}

int main()
{
    float averagePercentage, initialBalance;
    int tradeCount;

    printf("\nPlease enter initial Balance:\t");
    scanf("%f", &initialBalance);
    printf("\nPlease enter Percentage:\t");
    scanf("%f", &averagePercentage);
    printf("\nTrade Count:\t");
    scanf("%i", &tradeCount);

    float b = compoundingfunc(initialBalance, averagePercentage);

    for (int i = 0; i < tradeCount; i++)
    {
        printf("Trade %i\t%.2f\n", i, b);
        b = compoundingfunc(b, averagePercentage);
    }
    return 0;
}