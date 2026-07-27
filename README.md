# 🎯 Number Guessing Game in C
A beginner-friendly C number guessing game that uses random numbers, loops, and conditional statements.

## 🚀 Features

- Generates a random number based on the selected difficulty level
- Accepts guesses from the user
- Provides "Too High" and "Too Low" hints
- Continues until the correct number is guessed
- Counts the total number of attempts
- Uses random number generation
- Simple command-line interface
- Includes Easy, Medium, and Hard difficulty levels
- Validates guesses based on the selected difficulty range
- Invalid out-of-range guesses are not counted as attempts
- Limits attempts based on the selected difficulty level
- Shows remaining attempts after an incorrect valid guess
- Displays a Game Over message when all attempts are used
- Reveals the correct number after Game Over

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

## ⚙️ How It Works

1. The user selects a difficulty level.
2. Easy uses 1–50 with 10 attempts, Medium uses 1–100 with 8 attempts, and Hard uses 1–500 with 7 attempts.
3. The program generates a random secret number within the selected range.
4. The user enters a guess.
5. Out-of-range guesses display an error and are not counted as attempts.
6. Valid incorrect guesses receive a "Too low!" or "Too high!" hint.
7. The program displays the number of remaining attempts after an incorrect valid guess.
8. The game ends when the user guesses correctly or uses all available attempts.
9. If all attempts are used, the program displays Game Over and reveals the correct number.
10. If the user guesses correctly, the program displays the total attempts used.

## ▶️ How to Run

Compile the program using a C compiler:

    gcc number_guessing_game.c -o number_guessing_game

Run the program:

    ./number_guessing_game

Example:

       === Number Guessing Game ===

    Select Difficulty Level:
    1. Easy (1-50)
    2. Medium (1-100)
    3. Hard (1-500)
    Enter your choice: 2

    I have selected a number between 1 and 100.
    You have 8 attempts to guess it.
    Try to guess it!

    Enter your guess: 150
    Invalid guess! Enter a number between 1 and 100.

    Enter your guess: 40
    Too low! Try again.
    Attempts remaining: 7

    Enter your guess: 75
    Too high! Try again.
    Attempts remaining: 6

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
- Creating difficulty levels using conditional statements
- Using variables to control dynamic random number ranges
- Validating guesses against a selected range
- Using `continue` to skip invalid guesses without increasing the attempt count
- Setting attempt limits based on difficulty levels
- Controlling loops using multiple conditions
- Tracking and displaying remaining attempts
- Implementing a Game Over condition
- Revealing the secret number when the player runs out of attempts

## 🔮 Future Improvements

- Add input validation for invalid guesses
- Add a play-again option
- Display the best score
- Add a scoring system based on attempts
- Add input validation for invalid guesses

## 👨‍💻 Author

**Broun Verma**

Recruiter | BCA Student | Cybersecurity Learner
