#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, difficulty, max_number, max_attempts;
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
        max_attempts = 10;
    } else if (difficulty == 2) {
        max_number = 100;
        max_attempts = 8;
    } else if (difficulty == 3) {
        max_number = 500;
        max_attempts = 7;
    } else {
        printf("Invalid difficulty choice.\n");
        return 1;
    }

    secret_number = rand() % max_number + 1;

    printf("\nI have selected a number between 1 and %d.\n", max_number);
    printf("You have %d attempts to guess it.\n", max_attempts);
    printf("Try to guess it!\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        if (guess < 1 || guess > max_number) {
            printf("Invalid guess! Enter a number between 1 and %d.\n", max_number);
            continue;
        }

        attempts++;

        if (guess < secret_number) {
            printf("Too low! Try again.\n");
            printf("Attempts remaining: %d\n", max_attempts - attempts);
        } else if (guess > secret_number) {
            printf("Too high! Try again.\n");
            printf("Attempts remaining: %d\n", max_attempts - attempts);
        } else {
            printf("\nCorrect! You guessed the number.\n");
            printf("Total attempts: %d\n", attempts);
        }

    } while (guess != secret_number && attempts < max_attempts);

    if (guess != secret_number) {
        printf("\nGame Over! You have used all %d attempts.\n", max_attempts);
        printf("The correct number was: %d\n", secret_number);
    }

    return 0;
}
