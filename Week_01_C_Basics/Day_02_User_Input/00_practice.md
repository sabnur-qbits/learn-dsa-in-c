# 💻 Day 02 Practice: User Input and Basic Math 

Read the `00_Theory.md` file before starting these exercises. Remember to compile and run your code after writing it!

---

### 1. The Echo Chamber
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_02_User_Input/`
* **File Name:** `01_echo.c`
* **Task:** Write a program that asks you for your favorite number using `printf`, reads the integer using `scanf` (don't forget the `&`!), and prints it back to you.
* **Expected Output:**
    ```text
    Enter your favorite number: 7
    Wow, 7 is a great number!
    ```

---

### 2. The Dynamic Calculator
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_02_User_Input/`
* **File Name:** `02_dynamic_calculator.c`
* **Task:** Create three integer variables (e.g., `num1`, `num2`, `sum`). Ask the user to input two numbers. Read both using `scanf`, calculate their sum and difference, and print the results.
* **Expected Output:**
    ```text
    Enter the first number: 10
    Enter the second number: 4
    Sum: 14
    Difference: 6
    ```
    *Hint: You can read two numbers at once like this: `scanf("%d %d", &num1, &num2);`*

---

### 3. Time Travel
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_02_User_Input/`
* **File Name:** `03_next_year.c`
* **Task:** Ask the user for their current age. Store it in a variable, add 1 to that variable using math (`age = age + 1`), and print a sentence telling them how old they will be next year.
* **Expected Output:**
    ```text
    Hi Sabnur, enter your age: 22
    Next year, you will be 23 years old.
    ```