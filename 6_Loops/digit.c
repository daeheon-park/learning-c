/* Calculating the number of digits in an integer */

#include <stdio.h>

int main(void)
{
    int num, digit = 0;
    printf("Enter a nonnegative integer: ");
    scanf("%d", &num);

    do {
        num = num / 10;
        digit++;
    } while(num > 0);

    printf("The number has %d digits.\n", digit);
    return 0;
}