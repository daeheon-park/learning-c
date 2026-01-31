// Printing a table of squares

#include <stdio.h>

int main(void)
{
    int num, index = 1;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &num);

    while (index <= num){
        printf("\t%d\t%d\n", index, index*index);
        index++;
    }

    return 0;
}