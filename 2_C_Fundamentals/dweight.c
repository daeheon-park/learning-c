/* Computes the dimensional weight of a box
   from input provided by the user */

#include <stdio.h>
#define INCHES_PER_POUND 166
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)

int main(void){
    int height, length, width, volume, weight;
    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND -1) / INCHES_PER_POUND;
    printf("The volume is: %d\n", volume);
    printf("The weight is: %d\n", weight);


    return 0;
}