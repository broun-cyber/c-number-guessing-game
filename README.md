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

1. The user selects a difficulty level.
2. Easy uses a range of 1–50, Medium uses 1–100, and Hard uses 1–500.
3. The program generates a random secret number within the selected range.
4. The user enters a number as a guess.
5. The program checks whether the guess is within the selected difficulty range.
6. Out-of-range guesses display an error message and are not counted as attempts.
7. Valid guesses receive a "Too low!" or "Too high!" hint when incorrect.
8. The game continues until the correct number is guessed.
9. The program displays the total number of valid attempts after a correct guess.

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
    Try to guess it!

    Enter your guess: 150
    Invalid guess! Enter a number between 1 and 100.

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
- Creating difficulty levels using conditional statements
- Using variables to control dynamic random number ranges
- Validating guesses against a selected range
- Using `continue` to skip invalid guesses without increasing the attempt count

## 🔮 Future Improvements

- Add input validation for invalid guesses
- Limit the number of attempts
- Add a play-again option
- Display the best score
- Add a scoring system based on attempts
- Add input validation for invalid guesses

## 👨‍💻 Author

**Broun Verma**

Recruiter | BCA Student | Cybersecurity Learner
