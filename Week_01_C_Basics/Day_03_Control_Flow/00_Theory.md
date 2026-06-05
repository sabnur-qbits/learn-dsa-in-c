# 📖 Day 3 Theory: Control Flow & Making Decisions

Fantastic work so far, Sabnur! Over the past two days, you learned how to store data and talk to the user. Today, we give your program a "brain"—the ability to make choices and run different code depending on the conditions, such as guessing whether a number is even or calculating a store discount.

---

### 1. Relational Operators (Making Comparisons)

Relational operators allow your program to compare two values. They act like asking a Yes/No question: "Is this bigger than that?" or "Are these two the same?". In C, a "Yes" (True) results in a `1`, and a "No" (False) results in a `0`.

**Categorization / Types:**

| Operator | Name | What it does | Example (`a = 5`, `b = 10`) | Result (1 = True, 0 = False) |
| :--- | :--- | :--- | :--- | :--- |
| `==` | Equal to | Checks if two values are exactly the same | `a == b` | `0` (False) |
| `!=` | Not equal to | Checks if two values are different | `a != b` | `1` (True) |
| `>` | Greater than | Checks if the left value is bigger | `a > b` | `0` (False) |
| `<` | Less than | Checks if the left value is smaller | `a < b` | `1` (True) |
| `>=` | Greater than or equal to | Checks if the left value is bigger OR exactly the same | `a >= 5` | `1` (True) |
| `<=` | Less than or equal to | Checks if the left value is smaller OR exactly the same | `b <= 5` | `0` (False) |

**Example:**
```c
#include <stdio.h>

int main() {
    int age = 18;
    int required_age = 21;
    
    // Checks if age is greater than or equal to required_age
    int can_enter = (age >= required_age); 
    
    printf("Can enter? (1 for Yes, 0 for No): %d\n", can_enter);
    
    return 0;
}
```

**Output:**

```text
Can enter? (1 for Yes, 0 for No): 0
```

**🤔 Q&A: Relational Operators**

* **Q: I used `=` but my check isn't working correctly!**
* **A: A single `=` ASSIGNS a value (makes the left side equal to the right). A double `==` COMPARES values (asks a question). Using `=` instead of `==` is the most common beginner mistake!**

---

### 2. Logical Operators (Combining Conditions)

Sometimes you need to check multiple things at once. For example, to check if a number is between 1 and 10, it needs to be "greater than 0 AND less than 11". Logical operators let you combine or reverse multiple relational comparisons.

**Categorization / Types:**

| Operator | Name | What it does | Example |
| :--- | :--- | :--- | :--- |
| `&&` | Logical AND | Returns True (1) ONLY if **ALL** conditions are True. | `(x > 0) && (x < 10)` |
| `\|\|` | Logical OR | Returns True (1) if **AT LEAST ONE** condition is True. | `(letter == 'a') \|\| (letter == 'e')` |
| `!` | Logical NOT | Reverses the result (True becomes False, False becomes True). | `!(age >= 18)` |

**Example:**
```c
#include <stdio.h>

int main() {
    int math_score = 85;
    int science_score = 92;
    
    // Both must be greater than 80 to pass with honors
    int honors = (math_score > 80) && (science_score > 80);
    
    printf("Honors granted? (1=Yes, 0=No): %d\n", honors);
    
    return 0;
}
```

**Output:**

```text
Honors granted? (1=Yes, 0=No): 1
```

**🤔 Q&A: Logical Operators**

* **Q: Can I write `10 < x < 20` to check if x is between 10 and 20?**
* **A: No, C does not understand chained comparisons like in mathematics. You MUST break it into two conditions joined by an AND: `(x > 10) && (x < 20)`.**

---

### 3. Conditional Statements (if / else if / else)

Conditional statements use the True/False (1 or 0) results from your conditions to decide which block of code to execute. This brings branching logic to your program.

**Categorization / Types:**

| Statement Type | When to use it |
| :--- | :--- |
| `if` | When you have a single condition and a single block of code to run only if it's true. |
| `if` ... `else` | When you have a Plan A (if true) and a Plan B (fallback if false). |
| `if` ... `else if` ... `else`| When you have three or more completely different possible scenarios. |
| Nested `if` | When you want to check a condition *inside* another condition block. |

**Example:**
```c
#include <stdio.h>

int main() {
    float temperature = 25.5;
    
    if (temperature > 30.0) {
        printf("It's a hot day!\n");
    } 
    else if (temperature > 20.0) {
        printf("The weather is nice.\n");
    } 
    else {
        printf("It's a bit chilly.\n");
    }
    
    return 0;
}
```

**Output:**

```text
The weather is nice.
```

**🤔 Q&A: Conditional Statements**

* **Q: Do I always have to include an `else` at the end of an `if`?**
* **A: No, an `else` is completely optional. If you just want to do something *when* a condition is met and nothing otherwise, a single `if` is perfect.**

* **Q: Why are my `if` statement's `{ }` brackets acting weird or I am getting an error?**
* **A: Ensure you don't put a semicolon `;` directly after the parenthesis of an `if(condition)`. Doing this: `if (x == 5); { ... }` cuts off the `if` check from the code block below it!**

---

### 4. Character Input & The Whitespace Trap

When dealing with user input for characters (`%c`), `scanf` behaves a little surprisingly. Every time you hit the "Enter" key on your keyboard after typing a number previously, an invisible "newline" character (`\n`) is left in the input buffer. 

**Categorization / Types:**
(Not applicable here, but here is the specific fix for reading characters properly).

* **The Problem:** `scanf("%c", &letter);` will accidentally read the leftover `\n` from a previous enter key press instead of waiting for your actual character.
* **The Solution:** Add a single space *before* `%c` in `scanf` like this: `scanf(" %c", &letter);`. This magical space tells `scanf` to "skip all leftover whitespace (spaces, enters, tabs) and read the first real character".

**Example:**
```c
#include <stdio.h>

int main() {
    int age;
    char grade;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your expected grade (A/B/C): ");
    // Notice the space before %c here to bypass the leftover "Enter" from age!
    scanf(" %c", &grade);
    
    printf("You are %d years old and aiming for an %c!\n", age, grade);
    
    return 0;
}
```

**Output:**

```text
Enter your age: 20
Enter your expected grade (A/B/C): A
You are 20 years old and aiming for an A!
```

**🤔 Q&A: The Whitespace Trap**

* **Q: Do I need this space for `%d` or `%f` too?**
* **A: No! Numeric format specifiers (`%d`, `%f`) automatically ignore leftover invisible whitespace. This trap primarily happens with `%c` because a space or a newline IS a valid character!**
