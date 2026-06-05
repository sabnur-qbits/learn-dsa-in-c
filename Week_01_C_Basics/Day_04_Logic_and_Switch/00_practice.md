# 💻 Day 04 Practice: Complex Decisions (Logic & Switch)

Read the `00_Theory.md` file before starting. Today introduces Logical Operators (`&&`, `||`, `!`) and the `switch` statement. These allow you to check multiple conditions at the exact same time!

---

### 1. The Strict Bouncer
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_04_Logic_and_Switch/`
* **File Name:** `01_bouncer.c`
* **Task:** Ask the user for their age (int) and if they have a VIP pass (enter 'Y' or 'N'). Use the logical AND (`&&`) operator to print "Access Granted" ONLY if they are 18 or older AND have a VIP pass. Otherwise, print "Access Denied".
* **Expected Output:**
    ```text
    Enter your age: 19
    Do you have a VIP pass (Y/N)? Y
    Access Granted. Welcome to the club!
    ```

---

### 2. The Grade Standardizer
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_04_Logic_and_Switch/`
* **File Name:** `02_grader.c`
* **Task:** Ask the user for their test score (0-100). Use an `else if` chain combined with logical AND (`&&`) to assign a letter grade:
    * 90 to 100: 'A'
    * 80 to 89: 'B'
    * 70 to 79: 'C'
    * Below 70: 'F'
* **Expected Output:**
    ```text
    Enter your test score: 85
    Your grade is: B
    ```

---

### 3. The Leap Year Puzzle
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_04_Logic_and_Switch/`
* **File Name:** `03_leap_year.c`
* **Task:** This is a classic computer science problem! Ask the user for a year. A year is a leap year if:
    1. It is divisible by 4 AND not divisible by 100.
    2. OR (`||`) it is divisible by 400.
    Write a single `if` statement using `&&` and `||` to check this logic.
* **Expected Output:**
    ```text
    Enter a year: 2024
    2024 is a Leap Year!
    ```

---

### 4. Weekday or Weekend?
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_04_Logic_and_Switch/`
* **File Name:** `04_day_checker.c`
* **Task:** Ask the user to input a day number (1 for Monday, 7 for Sunday). Use a `switch` statement to print whether it is a "Weekday" (1-5) or "Weekend" (6-7). Include a `default` case to catch invalid numbers!
* **Expected Output:**
    ```text
    Enter day number (1-7): 6
    It's the Weekend! Time to relax.
    ```
    *Hint: In a switch statement, you can stack cases together without a `break` to make them share the same output!*

---

### 5. The Vending Machine
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_04_Logic_and_Switch/`
* **File Name:** `05_vending_machine.c`
* **Task:** Print a menu for a vending machine: `1: Water ($1)`, `2: Cola ($2)`, `3: Snack ($3)`. Ask the user to choose an option (1, 2, or 3). Use a `switch` statement to print out the item they chose and its price.
* **Expected Output:**
    ```text
    --- Menu ---
    1: Water
    2: Cola
    3: Snack
    Enter your choice: 2
    Dispensing Cola. That will be $2.
    ```