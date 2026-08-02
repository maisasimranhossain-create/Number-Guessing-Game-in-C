#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess;
    int attempts = 0;

    srand(time(0));

    secretNumber = rand() % 100 + 1;

    printf("====== NUMBER GUESSING GAME ======\n");
    printf("Guess a number between 1 and 100\n");

    while (guess != secretNumber)
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber)
        {
            printf("Too High!\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("\nCongratulations!\n");
            printf("You guessed the correct number.\n");
            printf("Attempts = %d\n", attempts);
        }
    }

    return 0;
}