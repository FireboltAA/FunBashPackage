#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int guess, amount, i, num, upper, lower;
    upper = 100;
    lower = 1;
    amount = 9;
    num = (rand() % (upper - lower + 1) + lower);
    printf("--------------------------------------\n");
    printf("\x1b[32mGuess the number between 1 and 100. You have ten tries.\x1b[0m");
    for(i = 0; i <= amount; i++){
        printf("\nGuess: ");
        scanf("%d", &guess);
        if (guess == num){
            printf("\x1b[36mYOU WIN!\x1b[0m\n\x1b[32mYou guessed it in %d tries!\x1b[0m\n", i+1);
            printf("--------------------------------------\n");
            exit(0);
        } else if (i == amount && guess != num){
            printf("\n\x1b[31mOOPS! You ran out of tries.\nThe number was %d\x1b[0m\n", num);
            printf("--------------------------------------\n");
            exit(0);
        } else if (guess > num){
            printf("\x1b[31mLower!\x1b[0m\n");
        } else if (guess < num){
            printf("\x1b[31mHigher!\x1b[0m\n");
        } else if (guess < lower || guess > upper){
            printf("\x1b[31mMust enter a number between 1 and 100\n");
            printf("--------------------------------------\n");
            exit(0);
        } else {
            printf("\x1b[31mMust enter a number between 1 and 100\n");
            printf("--------------------------------------\n");
            exit(0);
        }
    }
}
