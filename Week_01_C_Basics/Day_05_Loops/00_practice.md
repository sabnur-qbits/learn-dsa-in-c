# 💻 Day 05 Practice: The Power of Loops

Read the `00_Theory.md` file before starting. Today introduces the three main ways to repeat code: `for` loops, `while` loops, and `do-while` loops. 

---

## Part 1: Quick Drills (Pattern Recognition)
*These problems are designed to be fast. They will teach you how to control where a loop starts, where it ends, and how it steps forward.*

### 1. The Counter
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `01_count_up.c`
* **Task:** Ask the user for a positive integer `N`. Use a `for` loop to print all numbers from 1 to `N` on the same line, separated by spaces.
* **Expected Output:**
    ```text
    Enter N: 5
    1 2 3 4 5
    ```

### 2. The Countdown
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `02_countdown.c`
* **Task:** Ask the user for a positive integer `N`. Use a `while` loop to print numbers from `N` down to 1.
* **Expected Output:**
    ```text
    Enter N: 5
    5 4 3 2 1
    ```

### 3. Evens Only
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `03_evens.c`
* **Task:** Ask the user for `N`. Use a `for` loop to print only the EVEN numbers between 1 and `N`. 
* **Expected Output:**
    ```text
    Enter N: 10
    2 4 6 8 10
    ```

### 4. The Accumulator (Sum of N)
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `04_sum_n.c`
* **Task:** Ask the user for `N`. Calculate and print the sum of all numbers from 1 to `N`. (e.g., if N=4, sum is 1+2+3+4 = 10).
* **Expected Output:**
    ```text
    Enter N: 4
    The sum is: 10
    ```

### 5. The Multiplier
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `05_table.c`
* **Task:** Ask the user for a number. Print its multiplication table up to 10 using a `for` loop.
* **Expected Output:**
    ```text
    Enter a number: 7
    7 x 1 = 7
    7 x 2 = 14
    ...
    7 x 10 = 70
    ```

### 6. Factorial Finder
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `06_factorial.c`
* **Task:** Ask for a number `N`. Calculate its factorial (`N!`). For example, 5! = 5 * 4 * 3 * 2 * 1. *Hint: Set your initial total variable to 1, not 0!*
* **Expected Output:**
    ```text
    Enter a number: 5
    Factorial of 5 is: 120
    ```

### 7. Digit Counter
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `07_count_digits.c`
* **Task:** Ask the user for a large number. Use a `while` loop to count how many digits are in the number. *Hint: If you divide an integer by 10 over and over, it eventually hits 0!*
* **Expected Output:**
    ```text
    Enter a number: 45012
    That number has 5 digits.
    ```

---

## Part 2: Algorithmic Challenges
*These require you to combine loops with the `if/else` logic you learned yesterday.*

### 8. Reverse the Number
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `08_reverse_num.c`
* **Task:** Ask the user for a number and print it completely backwards. You must use math (modulo `% 10` and division `/ 10`), not strings!
* **Expected Output:**
    ```text
    Enter a number: 9876
    Reversed number: 6789
    ```

### 9. Prime Suspect
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `09_prime_check.c`
* **Task:** Ask the user for a number. Check if it is a Prime Number (a number divisible only by 1 and itself). Use a loop to check if any numbers between 2 and `N-1` divide evenly into `N`.
* **Expected Output:**
    ```text
    Enter a number: 13
    13 is a Prime Number!
    ```

### 10. The Fibonacci Sequence
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `10_fibonacci.c`
* **Task:** Ask the user for `N`. Print the first `N` terms of the Fibonacci sequence. (The sequence starts with 0 and 1. Every number after that is the sum of the two previous numbers: 0, 1, 1, 2, 3, 5, 8...).
* **Expected Output:**
    ```text
    Enter number of terms: 7
    0 1 1 2 3 5 8
    ```

### 11. The Persistent Vending Machine
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_05_Loops/`
* **File Name:** `11_persistent_menu.c`
* **Task:** Take yesterday's Vending Machine `switch` statement and wrap it in a `do-while` loop. Add a "Press 4 to Exit" option. The menu should keep re-appearing and asking for input until the user specifically chooses option 4. 
* **Expected Output:**
    ```text
    --- Menu ---
    1: Water
    2: Cola
    3: Snack
    4: Exit
    Enter choice: 1
    Dispensing Water...
    
    --- Menu ---
    1: Water
    2: Cola
    3: Snack
    4: Exit
    Enter choice: 4
    Goodbye!
    ```
    