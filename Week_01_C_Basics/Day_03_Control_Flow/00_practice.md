# 💻 Day 03 Practice: Making Decisions (If/Else)

Read the `00_Theory.md` file before starting these exercises. Pay special attention to the new "Relational Operators" (`>`, `<`, `==`) and the "Modulo Operator" (`%`)!

---

### 1. The Even/Odd Inspector
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_03_Control_Flow/`
* **File Name:** `01_even_odd.c`
* **Task:** Ask the user to enter an integer. Use the modulo operator (`%`) and an `if/else` statement to check if the number is even or odd, and print the result.
* **Expected Output:**
    ```text
    Enter a number: 14
    14 is an Even number.
    ```
    *(Run it again with an odd number like 7 to make sure both paths work!)*

---

### 2. Maximum of Three
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_03_Control_Flow/`
* **File Name:** `02_max_of_three.c`
* **Task:** Ask the user to input three different integers. Use `if`, `else if`, and `else` statements to figure out which number is the largest, and print it.
* **Expected Output:**
    ```text
    Enter three numbers: 45 89 12
    The largest number is: 89
    ```

---

### 3. The Discount Calculator
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_03_Control_Flow/`
* **File Name:** `03_discount.c`
* **Task:** Ask the user to enter their total shopping bill amount (use a `float`). If the bill is greater than or equal to $1000, apply a 10% discount. If it is less than $1000, they pay the full amount. Print the final amount they need to pay.
* **Expected Output (Discount applied):**
    ```text
    Enter your total bill: 1200
    You get a 10% discount! Your final amount is: 1080.00
    ```
* **Expected Output (No discount):**
    ```text
    Enter your total bill: 500
    No discount applied. Your final amount is: 500.00
    ```

---

### 4. Vowel or Consonant
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_03_Control_Flow/`
* **File Name:** `04_vowel_check.c`
* **Task:** Ask the user to input a single lowercase letter. Check if the letter is a vowel ('a', 'e', 'i', 'o', 'u') or a consonant.
* **Expected Output:**
    ```text
    Enter a lowercase letter: e
    'e' is a vowel.
    ```
    *Hint: When using `scanf` for a character, put a space before the `%c` like this: `scanf(" %c", &letter);`. Your theory file explains why!*