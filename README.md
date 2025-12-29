# C++ Mini Projects Collection

This repository features a diverse set of command-line applications developed in C++. The collection focuses on implementing core programming concepts such as random number generation, iterative logic, string manipulation, and mathematical modeling.

## Project Overview

1.  **Coin Flip Simulator**: A utility that simulates probability-based coin tosses using the C++ standard library's randomization features.
2.  **Countdown Timer**: A time-management application that utilizes system-level delays to track intervals.
3.  **Dice Simulator**: An application simulating multi-sided dice rolls, demonstrating seed-based random number generation.
4.  **Guessing Number**: An interactive logic game requiring the user to identify a target number through feedback loops.
5.  **Lottery Number Generator**: A simulation of the Romanian Lottery system, ensuring unique number generation within specific ranges.
6.  **Rock Paper Scissors**: A game implementation featuring player-vs-computer logic and conditional state management.
7.  **Savings Calculator**: A financial tool that applies compound interest formulas to project long-term savings based on user input.
8.  **Hangman**: A classic word-guessing game that demonstrates string processing, character comparison, and game-state tracking.

## Tech Stack
- Language: C++ (Standard ISO/IEC)
- Libraries: `<iostream>`, `<string>`, `<ctime>`, `<cstdlib>`, `<vector>`

## Compatibility Note
The source code includes terminal management commands optimized for specific operating systems:
- For **Windows**: The code uses `system("cls")`.
- For **macOS/Linux**: You should replace `system("cls")` with `system("clear")` to ensure proper terminal clearing.

## Build and Execution
To compile any of these projects using a standard compiler (like G++), use the following command structure:
1. Compile: `g++ main.cpp -o ProjectName`
2. Run: `./ProjectName`

## Key Competencies Demonstrated
- Effective use of the C++ Standard Template Library (STL).
- Management of user input and data validation.
- Implementation of game logic and state machines.
- Applied mathematics for financial and probability-based calculations.
