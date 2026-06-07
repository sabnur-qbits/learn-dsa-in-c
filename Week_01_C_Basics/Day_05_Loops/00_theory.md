# 📖 Day 05 Theory: The Power of Loops

You've mastered making decisions with `if-else` and `switch`. But what if you want to do something 100 times? Today, we learn how to make the computer repeat tasks automatically without writing the same code over and over.

---

### 1. The Concept of Iteration (Loops)

Imagine running around a track. You start at the starting line (initialization), you check if you have finished the required laps (condition), and after every lap, you add 1 to your lap counter (update/step). A loop does exactly this: it repeats a block of code as long as a specific condition is true.

**Categorization / Types:**
| Loop Type | What it does | When to use it | Example |
| :--- | :--- | :--- | :--- |
| `for` | Repeats code a specific number of times. All loop controls are on one line. | When you know exactly how many times the loop should run (e.g., counting 1 to N). | `for(int i=0; i<5; i++)` |
| `while` | Repeats code as long as a condition is true. The update step happens inside. | When you don't know how many times it will run, but you know when it should stop. | `while(n > 0)` |
| `do-while`| Runs the code *first*, then checks the condition. | When you need the code to run **at least once** regardless of the condition. | `do { ... } while(n > 0);` |

**Example:**
```c
#include <stdio.h>

int main() {
    // 1. A basic FOR loop
    printf("For Loop:\n");
    for (int i = 1; i <= 3; i++) {
        printf("Lap %d\n", i);
    }

    // 2. A basic WHILE loop
    printf("\nWhile Loop:\n");
    int count = 5;
    while (count > 2) {
        printf("Count: %d\n", count);
        count--; // don't forget to decrease!
    }

    return 0;
}
```

**Output:**

```text
For Loop:
Lap 1
Lap 2
Lap 3

While Loop:
Count: 5
Count: 4
Count: 3
```

**🤔 Q&A: Loops**

* **Q: What happens if I forget the `i++` or `count--` update step?**
* **A: You create an "infinite loop." The condition will never become false, and the program will run forever until you force it to quit (Ctrl+C).**

* **Q: Do I have to use `i` as my variable name?**
* **A: No! `i` is just short for "iterator" or "index," which is a standard convention. You can name it `count`, `lap`, or `number`.**

---

### 2. Math Operations with Loops (Stripping Digits)

When dealing with large numbers (like `9876`), you often need to isolate individual digits to process them (like counting them or reversing them). We can use our Day 1 math operators within a loop to break numbers apart.

**Categorization / Types:**
| Operation | Math Trick | What it does | Example |
| :--- | :--- | :--- | :--- |
| Get last digit | `num % 10` | Isolates the rightmost digit of a number. | `9876 % 10` results in `6`. |
| Remove last digit | `num / 10` | Chops off the rightmost digit (integer division). | `9876 / 10` results in `987`. |

**Example:**
```c
#include <stdio.h>

int main() {
    int num = 45;
    
    printf("Original: %d\n", num);
    
    int last_digit = num % 10;
    printf("Last Digit: %d\n", last_digit);
    
    num = num / 10;
    printf("Remaining Number: %d\n", num);
    
    return 0;
}
```

**Output:**

```text
Original: 45
Last Digit: 5
Remaining Number: 4
```

**🤔 Q&A: Math with Loops**

* **Q: Why does dividing by 10 chop off the decimal when working with basic variables?**
* **A: Because when you divide an `int` by an `int`, C performs "integer division." It completely discards the remainder or decimal portion.**

* **Q: When do I stop the loop if I am chopping digits off?**
* **A: Usually, you use a `while(num != 0)` or `while(num > 0)` loop. Once the number hits 0, there are no more digits left to process!**
