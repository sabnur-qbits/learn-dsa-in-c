# 📖 Day 06 Theory: 1D Arrays and Essential Algorithms

Welcome to Day 6, Sabnur! Yesterday you mastered loops, which allow you to repeat actions. Today, we're combining loops with a concept called **Arrays**. Instead of creating 50 separate variables for 50 student grades, you can create one array that holds 50 numbers. This is your first step into true Data Structures!

---

### 1. 1D Arrays

An array is like a row of connected lockers. Instead of having five different boxes spread around the room (`int a, b, c, d, e;`), an array gives you a single continuous shelf with compartments. **Crucial Rule:** In C, the first locker is always compartment `0`. If you have 5 lockers, they are numbered `0, 1, 2, 3, 4`.

**Categorization / Types:**
| Array Initialization Type | Syntax Example | Description |
| :--- | :--- | :--- |
| **Uninitialized** | `int arr[5];` | Creates 5 empty slots. Be careful: until you put something in them, they hold random "garbage" memory values. |
| **Fully Initialized** | `int arr[5] = {10, 20, 30, 40, 50};` | Creates 5 slots and fills them immediately. Index 0 gets 10, index 4 gets 50. |
| **Partially Initialized**| `int arr[5] = {10, 20};` | Fills the first 2 slots with 10 and 20. The remaining slots are automatically set to `0`. |
| **Implicit Size** | `int arr[] = {2, 4, 6};` | You don't specify the size in `[]`. The compiler counts the items and automatically makes it size 3. |

**Example:**
```c
#include <stdio.h>

int main() {
    // Partially initialized: remaining slots become 0
    int scores[5] = {95, 80}; 
    
    // We can manually change any specific locker
    scores[2] = 100;
    scores[4] = 77; // Modifying the very last slot!
    
    printf("Score at index 0: %d\n", scores[0]);
    printf("Score at index 1: %d\n", scores[1]);
    printf("Score at index 2: %d\n", scores[2]);
    printf("Score at index 3: %d\n", scores[3]); // Was left untouched, so it's 0
    printf("Score at index 4: %d\n", scores[4]);
    
    return 0;
}
```

**Output:**

```text
Score at index 0: 95
Score at index 1: 80
Score at index 2: 100
Score at index 3: 0
Score at index 4: 77
```

**🤔 Q&A: 1D Arrays**

* **Q: What happens if I make an array of size 5, but try to print `scores[5]` or `scores[10]`?**
* **A: This is called going "out of bounds". C won't stop you! It will go to that memory location and print whatever random, unpredictable garbage data happens to be sitting there. Always stay within your bounds (0 to size-1).**

* **Q: Can I put floats and ints in the same array?**
* **A: No. Arrays in C are homogeneous. An `int` array can only hold integers, and a `float` array can only hold floats.**

---

### 2. Array Traversal (Looping over Arrays)

Typing `scores[0]`, `scores[1]`, etc., by hand is tedious. Because the indices are just sequential numbers ($0, 1, 2, 3...$), we can use a `for` loop to act like a postman, walking down the hall and visiting every locker one by one!

**Categorization / Types:**
| Traversal Direction | `for` Loop Syntax | Common Use Case |
| :--- | :--- | :--- |
| **Forward Input** | `for(int i = 0; i < 5; i++) { scanf("%d", &arr[i]); }` | Asking the user to fill up an uninitialized array from start to end. |
| **Forward Output**| `for(int i = 0; i < 5; i++) { printf("%d ", arr[i]); }` | Printing the whole array on the screen. |
| **Reverse Output** | `for(int i = 4; i >= 0; i--) { printf("%d ", arr[i]); }` | Printing the array backwards. Notice we start at `4`, not `5`. |
| **Partial Access** | `for(int i = 0; i < 3; i++)` | Only looking at the first 3 elements of a larger array. |

**Example:**
```c
#include <stdio.h>

int main() {
    int numbers[3]; // Uninitialized array of size 3
    
    printf("Enter 3 numbers: ");
    
    // 1. Array Input Traversal
    for(int i = 0; i < 3; i++) {
        // Notice the & before numbers[i]
        scanf("%d", &numbers[i]);
    }
    
    // 2. Array Output Traversal
    printf("You entered: ");
    for(int i = 0; i < 3; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
```

**Output:**

```text
Enter 3 numbers: 15 25 35
You entered: 15 25 35 
```

**🤔 Q&A: Array Traversal**

* **Q: Why do we use `&` in the `scanf` but not in the `printf`?**
* **A: `numbers[i]` simply behaves like a regular `int` variable. Just like `scanf("%d", &x)` needs the memory address to save the data, `scanf("%d", &numbers[i])` needs the memory address of that specific array slot. `printf` just reads the value, so no `&` is needed.**

---

### 3. Basic Array Algorithms (Search, Accumulate, Filter)

Now that you can put things in an array and look at them, you can build algorithms! Algorithms are just step-by-step instructions to solve a problem, like finding a target (Linear Search) or finding the highest number (Max Element).

**Categorization / Types:**
| Algorithm Pattern | General Steps | Practical Example |
| :--- | :--- | :--- |
| **Accumulator** | Create `sum = 0`. Loop through array. Do `sum += arr[i]`. | Calculating total sales or average temperatures. |
| **Max/Min Search** | Set `max = arr[0]`. Loop. If `arr[i] > max`, update `max = arr[i]`. | Finding the highest test score in a class. |
| **Linear Search** | Ask for a `target`. Loop. If `arr[i] == target`, you found it! | Finding where a specific ID number is located. |
| **Frequency Count**| Create `count = 0`. Loop. If `arr[i] == target`, do `count++`. | Finding how many times a user clicked a button or counting even numbers. |

**Example:**
```c
#include <stdio.h>

int main() {
    int arr[5] = {12, 45, 7, 89, 23};
    
    // Algorithm: Find Max Element
    int max = arr[0]; // Assume first element is the biggest initially
    
    for(int i = 1; i < 5; i++) { // We can start loop at 1 since max is already arr[0]
        if(arr[i] > max) {
            max = arr[i]; // Update our record of the biggest!
        }
    }
    
    printf("The highest number is: %d\n", max);
    return 0;
}
```

**Output:**

```text
The highest number is: 89
```

**🤔 Q&A: Array Algorithms**

* **Q: In the Max search, why do we set `max` to `arr[0]` instead of just letting `int max = 0;`?**
* **A: If you set `max = 0`, and the array contains all negative numbers (like `-5, -10, -2`), the maximum would wrongly be reported as `0`! By setting it to `arr[0]`, you ensure you are comparing against a real number that exists in the list.**

---

### 4. Swapping Elements (The `temp` Variable)

Sometimes you need to swap the values in two different array slots. You can't just do `arr[0] = arr[4]` and `arr[4] = arr[0]`. Why? Because the moment you execute `arr[0] = arr[4]`, the original value inside `arr[0]` is overwritten and lost forever!

Think of it like having a glass of milk and a glass of juice. To swap them, you need a third empty glass. We call this the `temp` (temporary) variable.

**Categorization / Types:**
| Step | Action | Code |
| :--- | :--- | :--- |
| **1. Backup** | Pour Glass A into the Empty Temp Glass. | `int temp = arr[0];` |
| **2. Overwrite** | Pour Glass B into Glass A. / | `arr[0] = arr[4];` |
| **3. Restore** | Pour from Temp Glass into Glass B. | `arr[4] = temp;` |

**Example:**
```c
#include <stdio.h>

int main() {
    int arr[2] = {10, 99};
    
    printf("Before swap: %d and %d\n", arr[0], arr[1]);
    
    // The 3-Step Swap
    int temp = arr[0]; // Step 1: save the 10
    arr[0] = arr[1];   // Step 2: arr[0] is now 99
    arr[1] = temp;     // Step 3: arr[1] gets the saved 10
    
    printf("After swap: %d and %d\n", arr[0], arr[1]);
    
    return 0;
}
```

**Output:**

```text
Before swap: 10 and 99
After swap: 99 and 10
```

**🤔 Q&A: Swapping**

* **Q: Can I swap elements using logic without a temp variable?**
* **A: Yes, you can use mathematical tricks (like addition/subtraction or bitwise XOR), but using a `temp` variable is the standard, safest, and most readable way to write C code.**
