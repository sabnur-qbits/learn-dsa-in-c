# 💻 Day 06 Practice: Storing Data with 1D Arrays

Read the `00_Theory.md` file before starting. Today introduces Arrays! Remember the golden rule of arrays in C: **The first item is always at index `0`**. If an array holds 5 items, the last item is at index `4`.

---

## Part 1: Array Drills (Memory & Traversal)
*These problems focus on how to safely put data into an array and get it back out using `for` loops.*

### 1. The Roll Call (Input & Output)
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_06_1D_Arrays/`
* **File Name:** `01_roll_call.c`
* **Task:** Create an integer array of size 5. Use a `for` loop and `scanf` to ask the user to input 5 numbers. Then, use another `for` loop to print all 5 numbers back out on a single line.
* **Expected Output:**
    ```text
    Enter 5 numbers: 10 20 30 40 50
    You entered: 10 20 30 40 50
    ```

### 2. Backwards Glance
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_06_1D_Arrays/`
* **File Name:** `02_print_reverse.c`
* **Task:** Ask the user for 5 numbers and store them in an array. Print the array in exactly the reverse order. (Modify your loop so it starts at the end of the array and counts backwards to 0).
* **Expected Output:**
    ```text
    Enter 5 numbers: 1 2 3 4 5
    Reversed order: 5 4 3 2 1
    ```

### 3. The Accumulator (Array Edition)
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_06_1D_Arrays/`
* **File Name:** `03_array_sum.c`
* **Task:** Ask the user to input 5 float values (e.g., temperatures or prices) into a `float` array. Calculate and print the total sum and the average.
* **Expected Output:**
    ```text
    Enter 5 prices: 10.5 20.0 5.5 14.0 50.0
    Total Sum: 100.00
    Average: 20.00
    ```

---

## Part 2: Algorithmic Challenges
*Now we start doing actual Data Structures and Algorithms (DSA) basics: Searching and Filtering.*

### 4. Spot the Largest (Max Element)
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_06_1D_Arrays/`
* **File Name:** `04_find_max.c`
* **Task:** Take 5 integers as input. Write a loop to find the largest number in the array. 
    * *Hint: Create a variable called `max`. Set it equal to `array[0]` initially, then loop through the rest of the array. If you find a number bigger than `max`, update `max`!*
* **Expected Output:**
    ```text
    Enter 5 numbers: 12 45 7 89 23
    The largest number is: 89
    ```

### 5. The Search Party (Linear Search)
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_06_1D_Arrays/`
* **File Name:** `05_linear_search.c`
* **Task:** Ask the user to input 5 numbers into an array. Then, ask them for a "target" number to find. Loop through the array. If you find the target, print the index where it is located. If it is not there, print "Not found".
* **Expected Output (Found):**
    ```text
    Enter 5 numbers: 4 8 15 16 23
    Enter target to search for: 16
    Target 16 found at index 3!
    ```
* **Expected Output (Not Found):**
    ```text
    Enter 5 numbers: 4 8 15 16 23
    Enter target to search for: 99
    Target not found in the array.
    ```

### 6. Frequency Counter
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_06_1D_Arrays/`
* **File Name:** `06_frequency.c`
* **Task:** Ask the user to input 10 numbers (some should be duplicates). Ask them for a target number. Count exactly how many times that target number appears in the array.
* **Expected Output:**
    ```text
    Enter 10 numbers: 2 5 2 8 9 2 1 4 2 7
    Enter target to count: 2
    The number 2 appears 4 times.
    ```

### 7. Evens vs. Odds
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_06_1D_Arrays/`
* **File Name:** `07_even_odd_count.c`
* **Task:** Ask the user for 6 numbers. Loop through the array and count how many of the numbers are even, and how many are odd. Print both totals.
* **Expected Output:**
    ```text
    Enter 6 numbers: 1 2 3 4 5 6
    Even numbers: 3
    Odd numbers: 3
    ```

### 8. The Swap (Introduction to `temp` variables)
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_06_1D_Arrays/`
* **File Name:** `08_swap_ends.c`
* **Task:** Hardcode an array of 5 numbers (e.g., `int arr[5] = {10, 20, 30, 40, 50};`). Write code to swap the very first element (index 0) with the very last element (index 4). Print the array before and after the swap.
    * *Hint: If you just do `arr[0] = arr[4]`, you lose the first number forever! You need a temporary holding box (an `int temp;`) to safely execute the swap.*
* **Expected Output:**
    ```text
    Original array: 10 20 30 40 50
    Swapped array: 50 20 30 40 10
    ```