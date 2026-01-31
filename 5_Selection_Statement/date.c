/* Change date to legal form */

#include <stdio.h>

int main(void)
{
    int day, month, year, day2, month2, year2;
    
    printf("Enter first date(dd/mm/yy): ");
    scanf("%d/%d/%d", &day,&month,&year);
    printf("Enter second date(dd/mm/yy): ");
    scanf("%d/%d/%d", &day2,&month2,&year2);

    if(year2 > year)
        printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day, month, year);
    else if (year2 < year)
        printf("%d/%d/%d is earlier than %d/%d/%d", day, month, year, day2, month2, year2);
    else
        if (month2 > month)
            printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day, month, year);
        else if (month2 < month)
            printf("%d/%d/%d is earlier than %d/%d/%d", day, month, year, day2, month2, year2);
        else
            if (day2 > day)
                printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day, month, year);
            else if (day2 < day)
                printf("%d/%d/%d is earlier than %d/%d/%d", day, month, year, day2, month2, year2);
            else
                printf("Same date");
    return 0;
}