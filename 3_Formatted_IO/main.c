#include <stdio.h>

int main(void){
    int target = 52, guess, count = 0;

    while (1) {
        count += 1;
        printf("Guess a integer: ");
        scanf("%d", &guess);
        if (target > guess){
            printf("UP\n");
        }
        else if (target < guess){
            printf("Down\n");  
        }
        else {
            printf("Correct! Count : %d",count);
            break;
        }
    }

    return 0;
}
