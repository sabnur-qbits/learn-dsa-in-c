# 💻 Day 08 Practice: Modular Code with Functions

Read the `00_Theory.md` file before starting. Today is all about building your own tools! 
**Golden Rules for Today:**
1. A function must be **Declared** (the prototype) above `main()`.
2. A function must be **Defined** (the actual code) below `main()`.
3. A function must be **Called** (used) inside `main()`.

---

## Part 1: Function Drills (Building the Syntax)

### 1. The Greeting Machine (Void Function)
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_08_Functions/`
* **File Name:** `01_simple_greet.c`
* **Task:** Create a function named `sayHello` that takes no parameters and returns nothing (`void`). Inside the function, print "Hello! Welcome to Week 2!". Call this function exactly 3 times inside your `main()` function.
* **Expected Output:**
    ```text
    Hello! Welcome to Week 2!
    Hello! Welcome to Week 2!
    Hello! Welcome to Week 2!
    ```

### 2. The Custom Welcomer (Passing Parameters)
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_08_Functions/`
* **File Name:** `02_custom_greet.c`
* **Task:** Create a `void` function named `greetUser` that accepts an integer `age` as a parameter. Ask the user for their age inside `main()`, then pass that age into your function. The function should print the message.
* **Expected Output:**
    ```text
    Enter your age: 22
    Wow, you are 22 years old!
    ```

### 3. The Area Calculator (Returning Values)
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_08_Functions/`
* **File Name:** `03_rectangle_area.c`
* **Task:** Create a function named `calculateArea` that takes two `float` parameters (`length` and `width`). The function should calculate the area and **return** the result as a `float`. Inside `main()`, ask the user for the length and width, call the function, store the returned value in a variable, and print it.
* **Expected Output:**
    ```text
    Enter length and width: 5.5 10.0
    The area is: 55.00
    ```

---

## Part 2: Algorithmic Challenges (Reusability)

### 4. The Parity Checker (Is it Even?)
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_08_Functions/`
* **File Name:** `04_is_even.c`
* **Task:** Create a function named `isEven` that takes an integer `num`. It should return `1` if the number is even, and `0` if the number is odd. Inside `main()`, ask the user for a number, call the function, and use an `if/else` statement on the returned value to print the final result.
* **Expected Output:**
    ```text
    Enter a number: 14
    14 is Even.
    ```

### 5. The Max Function
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_08_Functions/`
* **File Name:** `05_find_max.c`
* **Task:** Create a function named `getMax` that takes two integers (`a` and `b`) and returns the larger of the two. 
Inside `main()`, ask the user for 3 numbers. Call `getMax` to find the larger of the first two numbers, then call `getMax` *again* to compare that result with the third number!
* **Expected Output:**
    ```text
    Enter 3 numbers: 45 89 12
    The maximum number is: 89
    ```

### 6. Array Printer Utility
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_08_Functions/`
* **File Name:** `06_print_array.c`
* **Task:** Create a `void` function named `printArray` that accepts an integer array and its size as parameters (e.g., `void printArray(int arr[], int size)`). Inside `main()`, hardcode two different arrays (one with 3 elements, one with 5 elements). Call your function twice to print both arrays.
* **Expected Output:**
    ```text
    Array 1: 10 20 30 
    Array 2: 1 2 3 4 5 
    ```