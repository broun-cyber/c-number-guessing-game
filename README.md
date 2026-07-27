# 🎯 Number Guessing Game in C
A beginner-friendly C number guessing game that uses random numbers, loops, and conditional statements.

## 🚀 Features

- Generates a random number between 1 and 100
- Accepts guesses from the user
- Provides "Too High" and "Too Low" hints
- Continues until the correct number is guessed
- Counts the total number of attempts
- Uses random number generation
- Simple command-line interface

## 🛠️ Technologies Used

- C Programming
- Standard Input/Output (`stdio.h`)
- Standard Library (`stdlib.h`)
- Time Library (`time.h`)
- Random Number Generation
- Loops
- Conditional Statements
- Git & GitHub

## ⚙️ How It Works

1. The program generates a random number between 1 and 100.
2. The user enters a number as a guess.
3. If the guess is lower than the secret number, the program displays "Too low!".
4. If the guess is higher than the secret number, the program displays "Too high!".
5. The program continues asking for guesses until the correct number is entered.
6. Once guessed correctly, it displays the total number of attempts.

## ▶️ How to Run

Compile the program using a C compiler:

    gcc number_guessing_game.c -o number_guessing_game

Run the program:

    ./number_guessing_game

Example:

    === Number Guessing Game ===
    I have selected a number between 1 and 100.
    Try to guess it!

    Enter your guess: 40
    Too low! Try again.

    Enter your guess: 75
    Too high! Try again.

    Enter your guess: 60

    Correct! You guessed the number.
    Total attempts: 3

## 🧠 What I Learned

Through this project, I practiced:

- Basic C program structure
- Taking user input with `scanf()`
- Displaying output with `printf()`
- Using `do-while` loops
- Working with `if`, `else if`, and `else`
- Generating random numbers with `rand()`
- Using `srand()` and `time()` for random number seeding
- Counting user attempts
- Git & GitHub workflow

## 🔮 Future Improvements

- Add input validation for invalid guesses
- Add difficulty levels
- Limit the number of attempts
- Add a play-again option
- Display the best score
- Add a scoring system based on attempts

## 👨‍💻 Author

**Broun Verma**

Recruiter | BCA Student | Cybersecurity Learner
