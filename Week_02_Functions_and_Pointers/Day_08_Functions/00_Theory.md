# 📖 Day 08 Theory: Modular Code with Functions

Welcome to Week 2! Until now, you have been writing all of your code directly inside `main()`. As your programs get larger, `main()` will become messy and difficult to read. Today, we learn how to create **Functions**—custom, reusable blocks of code that perform specific tasks.

---

### 1. The Anatomy of a Function

A function is like a custom appliance in your kitchen. `main()` is the chef. Instead of the chef chopping tomatoes by hand every single time, they build a "Chopper Machine" once. Whenever they need chopped tomatoes, they just push the button on the machine! 

**Categorization / Types:**
In C, building and using a function requires three distinct steps:

| Step | Location | Description | Example |
| :--- | :--- | :--- | :--- |
| **1. Declaration (Prototype)** | Above `main()` | Tells the C compiler, "Hey, this machine exists, and here is what it looks like." | `void sayHello();` |
| **2. Call (Usage)** | Inside `main()` | Actually pushing the button to run the machine. You can do this as many times as you want! | `sayHello();` |
| **3. Definition (The Code)** | Below `main()` | The actual gears and wiring of the machine. The code that runs when called. | `void sayHello() { printf("Hi!"); }` |

**Example:**
```c
#include <stdio.h>

// 1. Declaration
void sayHello(); 

int main() {
    printf("Starting the program...\n");
    
    // 2. Call
    sayHello(); 
    sayHello(); // Reusing the machine!
    
    printf("Program finished.\n");
    return 0;
}

// 3. Definition
void sayHello() {
    printf("Hello from inside the function!\n");
}
```

**Output:**

```text
Starting the program...
Hello from inside the function!
Hello from inside the function!
Program finished.
```

**🤔 Q&A: Anatomy of a Function**

* **Q: Why do we have to Declare it at the top and Define it at the bottom?**
* **A: C reads code from top to bottom. If you call `sayHello()` in `main()` without declaring it first, C will panic because it hasn't seen it yet. The declaration acts as a "promise" that the code exists further down.**

* **Q: What does `void` mean?**
* **A: `void` simply means "nothing." A `void` function does its job (like printing to the screen) but doesn't give any data back to `main()`.**

---

### 2. Parameters and Return Values

Functions become incredibly powerful when you can give them data to work with, and get answers back.
- **Parameters (Inputs):** The raw ingredients you put into the blender (e.g., fruit and ice).
- **Return Value (Output):** The smoothie that the blender hands back to you.

**Categorization / Types:**
You must specify what type of data goes in, and what type of data comes out:

| Return Type | Usage | Example Definition |
| :--- | :--- | :--- |
| **`int`** | Returns a whole number back to `main()`. Needs a `return` statement. | `int add(int a, int b) { return a + b; }` |
| **`float`** | Returns a decimal number. | `float getArea(float w, float h) { return w * h; }` |
| **`void`** | Returns nothing. Does not need a `return value;` statement. | `void printAge(int age) { printf("%d", age); }` |

**Example:**
```c
#include <stdio.h>

// Declaration
int calculateSum(int num1, int num2); 

int main() {
    // Calling the function and storing its Return Value in a variable
    int result = calculateSum(10, 5);
    
    printf("The sum is: %d\n", result);
    return 0;
}

// Definition
int calculateSum(int num1, int num2) {
    int total = num1 + num2;
    return total; // Hands the 'total' back to main!
}
```

**Output:**

```text
The sum is: 15
```

**🤔 Q&A: Parameters and Return Values**

* **Q: Do the parameter names in the Declaration and Definition have to match exactly?**
* **A: Actually, no! The declaration only cares about the *types* (e.g., `int calculateSum(int, int);` is perfectly legal). But keeping the names the same makes your code much easier to read.**

* **Q: Can a function return two things at once?**
* **A: No. In C, a function can only ever execute one `return` statement, and it can only return a single value. Once a function hits `return`, it instantly stops running!**

---

### 3. Arrays as Function Parameters

When you pass an array to a function, C does something very special to save memory. It doesn't copy all the elements. Instead, it just hands the function the **memory address** of the very first element (the start of the array).

Because the function only knows *where* the array starts, it has no idea *how long* the array is! Therefore, whenever you pass an array to a function, you must almost always pass its size as a second parameter.

**Categorization / Types:**
| Syntax | Description | Example |
| :--- | :--- | :--- |
| **Parameter Definition** | Use empty brackets `[]` to tell the function it's receiving an array. | `void printArray(int arr[], int size)` |
| **Function Call** | Just pass the **name** of the array. No brackets! | `printArray(myNumbers, 5);` |

**Example:**
```c
#include <stdio.h>

void showArray(int arr[], int size);

int main() {
    int grades[] = {85, 90, 78};
    int numberOfGrades = 3;
    
    // Pass the array name and the size separately
    showArray(grades, numberOfGrades);
    
    return 0;
}

void showArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
```

**Output:**

```text
85 90 78 
```

**🤔 Q&A: Arrays as Parameters**

* **Q: Why don't I put brackets in the function call, like `showArray(grades[], 3)`?**
* **A: Writing `grades[]` is syntax for declaring an array. In C, just typing the name `grades` by itself automatically represents the memory address of the array. So you just pass the name!**
