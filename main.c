#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

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
    float a, b, c;
    while (i == true)
    {
        inBalance = compoundingfunc(inBalance, percentage);
        a = compoundingfunc(inBalance, percentage);

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
    system("@cls||clear");
    int tradeCount;
    char selectionOfMode;
    float averagePercentage, initialBalance;

    printf("Please select the Mode:\n1 for Calculation of Compounding until given amounts of Trades.\n2 for Calculation of the Compounding Trade count until the Amount reached.\n");
    selectionOfMode = getchar();
    while (selectionOfMode != 0)
    {
        system("@cls||clear");
        printf("Please select the Mode:\n1 for Calculation of Compounding until given amounts of Trades.\n2 for Calculation of the Compounding Trade count until the Amount reached.\n");
        selectionOfMode = getchar();
        switch (selectionOfMode)
        {
        case '1':
            printf("Mode 1\n");
            printf("\nPlease enter initial Balance:\t");
            scanf("%f", &initialBalance);
            printf("\nPlease enter Percentage:\t");
            scanf("%f", &averagePercentage);
            compoundTillTradeCount(initialBalance, averagePercentage);
            break;
        case '2':
            printf("Mode 2\n");
            printf("\nPlease enter initial Balance:\t");
            scanf("%f", &initialBalance);
            printf("\nPlease enter Percentage:\t");
            scanf("%f", &averagePercentage);
            compoundTillAmountfunc(initialBalance, averagePercentage);
            break;
        default:
            break;
        }
        printf("\n");
        system("pause");
    }

    return 0;
}