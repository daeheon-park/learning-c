/* Summing a series of numbers */

#include <stdio.h>

int main(void)
{   
    int num, sum = 0;
    
    printf("This program sums a series of integers.\n");

    while (num != 0){
        printf("Enter integers (0 to terminate): ");
        scanf("%d", &num);

        sum += num;
    }

    printf("The sum is : %d\n", sum);

    return 0;
}