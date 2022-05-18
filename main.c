#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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

float compoundTillAmountfunc(float inBalance, float percentage)
{
    float amountToReach;
    printf("\nAmount to reach:   ");
    scanf("%f", &amountToReach);
    bool i = true;
    int count = 1;
    while (i == true)
    {
        float a = compoundingfunc(inBalance, percentage);
        if (a > amountToReach)
        {
            printf("\nTrade count needed to reach required Amount:  %i", count);
            i = false;
        }
        else
        {
            i = true;
        }
        count++;
    }
}

int main()
{
    float averagePercentage, initialBalance;
    int tradeCount;

    printf("\nPlease enter initial Balance:\t");
    scanf("%f", &initialBalance);
    printf("\nPlease enter Percentage:\t");
    scanf("%f", &averagePercentage);

    compoundTillAmountfunc(initialBalance, averagePercentage);

    return 0;
}