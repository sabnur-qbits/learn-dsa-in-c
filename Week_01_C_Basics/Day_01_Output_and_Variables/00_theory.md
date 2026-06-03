# 📖 Day 01 Theory: Output and Variables 

Welcome to your very first day of C programming, Sabnur! Today, we are laying the absolute foundation. You will learn how to make the computer talk back to you and how to store simple pieces of information in the computer's memory. Let's dive in!

---

### 1. Basic Output and Program Structure

Think of a C program as a recipe. To bake a cake, you need ingredients and steps. In C, `#include <stdio.h>` is like bringing in your basic kitchen tools, and the `int main()` function is the actual recipe where you write all your step-by-step instructions. To talk to the screen, we use a tool called `printf`.

**Standard C Program Boilerplate:**
Every C program you write will start with this basic shell:
```c
#include <stdio.h> // Standard Input/Output library

int main() {
    // Your code goes here
    return 0; // Tells the system the program finished successfully
}
```

**Example:**
```c
#include <stdio.h>

int main() {
    printf("Hello, Sabnur!");
    return 0;
}
```

**Output:**
```text
Hello, Sabnur!
```

**🤔 Q&A: Basic Output**

* **Q: Why do I need a semicolon `;` at the end of `printf`?**
* **A: In C, a semicolon acts like a period at the end of an English sentence. It tells the compiler that the specific instruction is complete.**

* **Q: What does `#include <stdio.h>` actually do?**
* **A: It tells the compiler to import the "Standard Input Output" library, which contains the inner workings of commands like `printf`. Without it, the computer wouldn't know what `printf` means.**

---

### 2. Escape Sequences

When you write text, sometimes you need to press "Enter" to go to the next line, or "Tab" to add space. In code, you cannot simply press Enter inside quotes to make a new line. You have to use special hidden codes called "Escape Sequences".

**Categorization / Types:**
| Escape Sequence | Name / Meaning | Example Use | Output Result |
| :--- | :--- | :--- | :--- |
| `\n` | Newline | `printf("Hi\nSabnur");` | Moves cursor to the next line. |
| `\t` | Horizontal Tab | `printf("A\tB");` | Adds a large tab space between A and B. |
| `\\` | Backslash | `printf("C:\\folder");` | Prints a single backslash. (Since one is a special trigger, two are needed to print one). |
| `\"` | Double Quote | `printf("She said \"Hi\"");` | Prints a double quote without ending the string early. |
| `\'` | Single Quote | `printf("It\'s C!");` | Prints a single quote. |

**Example:**
```c
#include <stdio.h>

int main() {
    printf("Line 1\n");
    printf("Line 2\nLine 3\n");
    return 0;
}
```

**Output:**
```text
Line 1
Line 2
Line 3
```

**🤔 Q&A: Escape Sequences**

* **Q: Why use `\n` instead of just using multiple `printf` statements?**
* **A: Even if you use multiple `printf` statements, C will print everything on the same continuous line unless you explicitly tell it to break the line using `\n`.**

---

### 3. Variables and Data Types

Think of variables like labeled boxes in a warehouse. If you want to store the number 5, you get a box, write a name on it (like `myNumber`), specify what *kind* of box it is (an integer box), and put the 5 inside.

**Categorization / Types:**
| Data Type | Description | Size (typical) | Example Value | Declaration Example |
| :--- | :--- | :--- | :--- | :--- |
| `int` | Integer (Whole numbers without decimals) | 4 bytes | `5`, `-20`, `1000` | `int age = 22;` |
| `float` | Floating-point (Numbers with decimals) | 4 bytes | `3.14`, `-0.5` | `float price = 9.99;` |
| `double` | Double precision float (More precise decimals) | 8 bytes | `3.14159265` | `double pi = 3.14159;` |
| `char` | Character (A single letter or symbol) | 1 byte | `'A'`, `'z'`, `'?'` | `char grade = 'A';` |

**Example:**
```c
#include <stdio.h>

int main() {
    int appleCount = 5;
    int bananaCount = 10;
    int totalFruit = appleCount + bananaCount;
    
    return 0;
}
```

**🤔 Q&A: Variables**

* **Q: Can I name my variable anything?**
* **A: Almost! Variable names must start with a letter or underscore, cannot contain spaces, shouldn't use special characters like `!` or `@`, and cannot be a reserved C keyword (like `int` or `return`).**

* **Q: Do I have to give a variable a value immediately?**
* **A: No. You can declare it first (`int score;`) and assign it later (`score = 100;`). However, using an unassigned variable can lead to bugs because it will contain random "garbage" memory.**

---

### 4. Format Specifiers and Doing Math

If you want to print the contents of a variable inside `printf`, you cannot just put its name in quotes. You have to use placeholders inside the text, telling C what *type* of data is going to be injected there. These placeholders are called Format Specifiers. Also, you can perform basic arithmetic directly in C just like a calculator.

**Categorization / Format Specifiers:**
| Format Specifier | Associated Data Type | Example Use |
| :--- | :--- | :--- |
| `%d` or `%i` | `int` (Integer) | `printf("Age: %d", 25);` |
| `%f` | `float` (Decimal) | `printf("Price: %f", 3.99);` |
| `%lf` | `double` (Large Decimal) | `printf("Pi: %lf", 3.14159);` |
| `%c` | `char` (Character) | `printf("Grade: %c", 'A');` |
| `%s` | String (Text, array of characters) | `printf("Name: %s", "Sabnur");` |

**Categorization / Basic Operators:**
| Arithmetic Operator | Meaning | Example (`x=10, y=3`) | Result |
| :--- | :--- | :--- | :--- |
| `+` | Addition | `x + y` | `13` |
| `-` | Subtraction | `x - y` | `7` |
| `*` | Multiplication | `x * y` | `30` |
| `/` | Division | `x / y` | `3` (Integer division truncates decimals) |
| `%` | Modulus (Remainder) | `x % y` | `1` (10 divided by 3 has remainder 1) |

**Example:**
```c
#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = num1 + num2;
    
    // The %d will be replaced by the value of 'num1', the next %d by 'num2', and so on.
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);
    
    return 0;
}
```

**Output:**
```text
The sum of 5 and 10 is 15.
```

**🤔 Q&A: Format Specifiers & Math**

* **Q: What happens if I use `%d` but pass a decimal number (`float`) to it?**
* **A: C will generally give you a warning or print a garbage/corrupted value. You must match the format specifier to the exact data type.**

* **Q: Why does `10 / 3` equal `3` instead of `3.333` in C?**
* **A: When dividing two integers, C performs "integer division" and simply chops off the decimal part. To get decimals, at least one of the numbers must be a float (e.g., `10.0 / 3`).**
