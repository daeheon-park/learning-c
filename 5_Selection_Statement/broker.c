/* Calculates a broker's commission */

#include <stdio.h>
#define PERCENT 100

int main(void)
{
    float payment;

    printf("Enter the value of trade: ");
    scanf("%f", &payment);

    if (payment < 2500)
        printf("Commission: %.f", 30 + payment * 1.7 / PERCENT);
    else if (payment >= 2500 && payment < 6250)
        printf("Commission: %.f", 56 + payment * 0.66 / PERCENT);
    else if (payment >= 6250 && payment < 20000)
        printf("Commission: %.f", 76 + payment * 0.34 / PERCENT);
    else if (payment >= 20000 && payment < 50000)
        printf("Commission: %.f", 100 + payment * 0.22 / PERCENT);
    else if (payment >= 50000 && payment < 500000)
        printf("Commission: %.f", 155 + payment * 0.11 / PERCENT);
    else            
        printf("Commission: %.f", 255 + payment * 0.09 / PERCENT);       

    return 0;
}