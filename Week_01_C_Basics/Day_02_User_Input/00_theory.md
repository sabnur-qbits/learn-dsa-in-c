# 📖 Day 02 Theory: User Input and Modifying Data

Yesterday, you learned how to make your program talk by printing messages to the screen and doing basic math. Today, we'll make your programs interactive by teaching them how to listen to you!

---

### 1. User Input with `scanf` and `&`

If `printf` is your program talking, `scanf` is your program listening. Just like a mailman needs your house address to deliver a package, `scanf` needs the memory address of a variable to store the data you type. We give it the address by putting an ampersand (`&`) in front of the variable name.

**Usage with Format Specifiers:**
You already know format specifiers like `%d` and `%f` from Day 1. `scanf` uses these exact same specifiers to know what type of data to read, but pairs them with the memory address operator (`&`).

**Example:**
```c
#include <stdio.h>

int main() {
    int score;
    printf("Please enter your high score: ");
    
    // Listen for an integer (%d) and store it at the address of 'score' (&score)
    scanf("%d", &score);
    
    printf("Your recorded score is %d points!\n", score);
    return 0;
}
```

**Output:**
```text
Please enter your high score: 9500
Your recorded score is 9500 points!
```

**🤔 Q&A: User Input via `scanf`**

* **Q: Why does my program crash when I try to type in my number?**
* **A: You probably forgot the `&` (ampersand) before the variable name. Without `&`, `scanf` tries to save the data to an invalid memory location, causing the program to crash instantly.**

* **Q: Can I read multiple inputs at the same time?**
* **A: Yes! You can put multiple format specifiers in the quotes, like `scanf("%d %d", &num1, &num2);`. When the program runs, you can just type the numbers separated by a space and hit enter.**

---

### 2. Modifying Variables (Reassignment)

A variable is just a box holding a value in the computer's memory. Reassigning it means taking the old value out of the box, doing something to it, and putting the new value back into that same box.

**Categorization / Types:**
In C, the `=` sign is not an "equals to" sign like in math. It is the **Assignment Operator**. Here are the variations of how you can assign or update a value:

| Operator | Name | Example | What it does |
|---|---|---|---|
| `=` | Simple Assignment | `x = 5;` | Sets x to 5 |
| `+=` | Add and Assign | `x += 5;` | Same as `x = x + 5;` |
| `-=` | Subtract and Assign | `x -= 5;` | Same as `x = x - 5;` |
| `*=` | Multiply and Assign | `x *= 5;` | Same as `x = x * 5;` |
| `/=` | Divide and Assign | `x /= 5;` | Same as `x = x / 5;` |

**Example:**
```c
#include <stdio.h>

int main() {
    int apples = 5;
    
    // We update the variable by adding 3 to the current value
    apples = apples + 3; 
    
    printf("After picking more, I have %d apples.\n", apples);
    return 0;
}
```

**Output:**
```text
After picking more, I have 8 apples.
```

**🤔 Q&A: Modifying Variables**

* **Q: In algebra, `x = x + 1` makes no sense. Why does it work in C?**
* **A: Because in C, `=` means "assign the value on the right to the variable on the left". It calculates the right side (`x + 1`) first, and then saves that new result into the `x` box.**

* **Q: Is there a really short way to just add 1 to a variable?**
* **A: Yes! You can use `x++` (which does exactly `x = x + 1`). This is very common in C!**