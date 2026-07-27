#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, difficulty, max_number;
    int attempts = 0;

    srand(time(NULL));
    printf("=== Number Guessing Game ===\n");
    printf("\nSelect Difficulty Level:\n");
    printf("1. Easy (1-50)\n");
    printf("2. Medium (1-100)\n");
    printf("3. Hard (1-500)\n");
    printf("Enter your choice: ");
    scanf("%d", &difficulty);

    if (difficulty == 1) {
        max_number = 50;
    } else if (difficulty == 2) {
        max_number = 100;
    } else if (difficulty == 3) {
        max_number = 500;
    } else {
        printf("Invalid difficulty choice.\n");
        return 1;
    }
    secret_number = rand() % max_number + 1;
    
    printf("I have selected a number between 1 and %d.\n", max_number);
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
