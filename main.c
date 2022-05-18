#include <stdio.h>
#include <math.h>

float compoundingfunc(float inBalance, float percentage)
{
    float finBalance = ((inBalance * percentage) / 100.0) + inBalance;
    return finBalance;
}

float compoundTillTradeCount(float inBalance, float percentage)
{
    int tradeCount;
    printf("\nTrade Count:\t");
    scanf("%i", &tradeCount);
    printf("\nInitial Amount %.2f\n", inBalance);
    float b = compoundingfunc(inBalance, percentage);
    for (int i = 1; i <= tradeCount; i++)
    {
        printf("\nTrade %i     %.2f", i, b);
        b = compoundingfunc(b, percentage);
    }
}

float compoundTillAmountfunc(float inBalance, float percentage, float amountToReach)
{
    float a = compoundingfunc(inBalance, percentage);
}

int main()
{
    float averagePercentage, initialBalance;
    int tradeCount;

    printf("\nPlease enter initial Balance:\t");
    scanf("%f", &initialBalance);
    printf("\nPlease enter Percentage:\t");
    scanf("%f", &averagePercentage);

    compoundTillTradeCount(initialBalance,averagePercentage);

    return 0;
}