/*************** ***************
*    programmer: Daeheon       *
*    starting date: 29/01/26   *
*    hunger level: low         *
********************************/

#include <stdio.h>

int main(void) {
    int height=10, length=20, width=5, volume;
    float profit=1000.12345f, loss, weight;

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %d x %d x %d\n", width,length,height);
    printf("Volume (Cubic inches) : %d\n", volume);
    printf("Weight : %.3f\n", weight);

    printf("%d", height * length * width);

    return 0;
}
