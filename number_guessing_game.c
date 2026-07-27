#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess;
    int attempts = 0;

    srand(time(NULL));

    secret_number = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("\nCorrect! You guessed the number.\n");
            printf("Total attempts: %d\n", attempts);
        }

    } while (guess != secret_number);

    return 0;
}
