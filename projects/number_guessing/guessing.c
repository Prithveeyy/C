#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int min = 1;
    const int max = 100;
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));
    answer = (rand() % max) + min;

    do
    {
        printf("Enter a guess  ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high\n");
        }
        else if (guess < answer)
        {
            printf("Too low\n");
        }
        else if (guess == answer)
        {
            printf("That's correct !\n");
        }
        guesses++;      
    } while (guess != answer);

    printf("\n*************\n");
    printf("*answer: %d*\n",answer);
    printf("*Guesses : %d*\n",guesses);
    printf("*************\n");
    
}