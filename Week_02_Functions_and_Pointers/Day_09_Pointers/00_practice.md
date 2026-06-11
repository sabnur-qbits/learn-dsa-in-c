# 💻 Day 09 Practice: Introduction to Pointers (The Remote Control)

Read the `00_Theory.md` file carefully before starting. Today, you are looking under the hood of the computer. 
**Golden Rules for Today:**
1. `&` means "The exact memory address of..."
2. `*` (when declaring) means "This variable holds an address, not a normal number."
3. `*` (when using) means "Go to the address and get/change the value inside it."

---

## Part 1: Pointer Drills (Seeing the Matrix)

### 1. The Memory Inspector
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_09_Pointers/`
* **File Name:** `01_memory_address.c`
* **Task:** Create an integer variable `age` and set it to 20. Print the actual value of the variable, and then print its physical memory address using the `%p` format specifier and the `&` operator.
* **Expected Output:**
    ```text
    Value of age: 20
    Memory Address of age: 0x7ffeefbff5ac  *(Note: Your exact address will look different!)*
    ```

### 2. The Remote Control (Dereferencing)
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_09_Pointers/`
* **File Name:** `02_remote_control.c`
* **Task:** Create a `float` variable called `price` set to `9.99`. Create a float pointer (`float *ptr`) and point it to the address of `price`. Then, without ever touching the `price` variable directly, use the pointer (the remote control) to change the value to `15.50`. Print `price` to prove it changed!
* **Expected Output:**
    ```text
    Original price: 9.99
    New price (changed via pointer): 15.50
    ```

---

## Part 2: Pass by Reference (Fixing Old Problems)

### 3. The True Swap (Pass by Reference)
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_09_Pointers/`
* **File Name:** `03_true_swap.c`
* **Task:** Remember Day 6 when you swapped elements in `main`? Let's make a tool for it. Create a function `void swap(int *a, int *b)`. Inside, use a `temp` variable and pointers to swap the values. In `main()`, create two numbers, print them, call `swap(&num1, &num2)`, and print them again to prove they permanently swapped.
* **Expected Output:**
    ```text
    Before Swap: num1 = 10, num2 = 50
    After Swap: num1 = 50, num2 = 10
    ```

### 4. The Value Doubler
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_09_Pointers/`
* **File Name:** `04_doubler.c`
* **Task:** Create a `void` function called `doubleValue` that accepts an integer pointer (`int *num`). The function should multiply whatever is inside that address by 2. In `main()`, ask the user for a number, pass its address to the function, and print the modified number.
* **Expected Output:**
    ```text
    Enter a number: 21
    After doubling, the value is: 42
    ```

### 5. Array Anatomy (Proof of Concept)
* **Directory:** `DSA_Workspace/Week_02_Functions_and_Pointers/Day_09_Pointers/`
* **File Name:** `05_array_addresses.c`
* **Task:** Create an array of 3 integers (e.g., `{10, 20, 30}`). Use a `for` loop to print the value AND the memory address (`%p`) of every single element (`&arr[i]`). Look closely at the addresses printed—you will notice they go up by exactly 4 bytes each time (because an `int` takes 4 bytes of memory)!
* **Expected Output:**
    ```text
    Index 0 | Value: 10 | Address: 0x16b08b340
    Index 1 | Value: 20 | Address: 0x16b08b344
    Index 2 | Value: 30 | Address: 0x16b08b348
    ```