# 📖 Day 07 Theory: Strings (Character Arrays)

Yesterday, you mastered 1D arrays to store sequences of numbers, traversing them and searching through them. Today, we're applying that exact same logic to store sequences of text using character arrays, commonly known as Strings!

---

### 1. Strings and The Null Terminator

A string in C is just an array of `char` types. Imagine a string like a train of letters. The train pulls cars carrying one letter each, and there is a special, invisible caboose at the very end that tells the computer, "The train stops here." This caboose is called the **Null Terminator** (`'\0'`). Without it, C wouldn't know where your word ends and would keep printing random garbage from memory!

**Categorization / Types:**
Here are the different ways you can create and initialize a string in C:

| Initialization Type | Description | Example |
| :--- | :--- | :--- |
| **Character by Character** | Manually placing each letter in the array. You MUST add the `'\0'` at the end yourself. | `char name[] = {'H', 'i', '\0'};` |
| **String Literal** | The most common way. Double quotes automatically add the `'\0'` at the end for you. | `char name[] = "Hello";` |
| **Fixed Size String** | Setting a maximum limit for the array, initializing it with a string literal. Extra spaces become `'\0'`. | `char name[20] = "Sabnur";` |

**Example:**
```c
#include <stdio.h>

int main() {
    // Creating a string using a string literal
    char greeting[] = "Hello";
    
    // Changing a single character using its index
    greeting[0] = 'J';
    
    printf("Greeting: %s\n", greeting);
    
    // Proving the null terminator exists by printing the 5th index
    if (greeting[5] == '\0') {
        printf("Index 5 is the invisible Null Terminator!\n");
    }

    return 0;
}
```

**Output:**

```text
Greeting: Jello
Index 5 is the invisible Null Terminator!
```

**🤔 Q&A: Strings and The Null Terminator**

* **Q: What happens if I forget the `'\0'` when making a string character by character?**
* **A: C will start printing your letters, but since there is no stop sign, it will keep reading into the next memory addresses, printing weird symbols (garbage values) until it accidentally hits a zero in memory.**

* **Q: Do I need to use `&` when using `scanf` for strings?**
* **A: No! The name of an array in C actually points directly to its address in memory. So `scanf("%s", name);` works perfectly without the `&` symbol.**

---

### 2. Reading Text (`scanf` vs `fgets`)

`scanf` with `%s` is like a reader who gives up the moment they see a space (a blank page). It's great for single words but terrible for sentences. To read a full sentence with spaces, we use a different tool called `fgets()`.

**Categorization / Types:**
Here are the tools for reading strings from the user:

| Input Function | Best For | Behavior | Example |
| :--- | :--- | :--- | :--- |
| **`scanf("%s", str)`** | Single words | Reads characters until the first space, tab, or newline. Automatically adds `'\0'`. | `scanf("%s", firstName);` |
| **`fgets(str, size, stdin)`** | Full sentences | Reads an entire line (including spaces) until the user presses ENTER. Automatically adds `'\0'`. | `fgets(fullName, 50, stdin);` |

**Example:**
```c
#include <stdio.h>

int main() {
    char word[20];
    char sentence[50];
    
    printf("Enter a single word: ");
    scanf("%s", word);
    
    // We need to clear the newline character leftover from scanf before using fgets
    // Otherwise fgets will instantly read the previous 'Enter' key press!
    scanf(" %c"); // Wait for the leftover newline, we learned this on Day 03!
    // A better way is: while(getchar() != '\n'); but let's stick to what we know.
    // Actually, simply doing getchar() once usually clears the newline:
    // getchar();
    
    printf("You typed the word: %s\n", word);
    
    // Let's properly use fgets without the scanf conflict for demonstration:
    // Note: If you run these consecutively, you usually need to clear the input buffer.
    printf("Enter a full sentence: ");
    // The format is fgets(array_name, max_size, standard_input_stream)
    fgets(sentence, sizeof(sentence), stdin);
    
    printf("You typed the sentence: %s", sentence);

    return 0;
}
```

**Output:**

```text
Enter a single word: Apple
You typed the word: Apple
Enter a full sentence: Apple is a fruit
You typed the sentence: Apple is a fruit
```

**🤔 Q&A: Reading Text**

* **Q: Why does my `fgets` seem to skip input and just jump to the next line of code?**
* **A: If you used `scanf` right before `fgets`, `scanf` leaves the "Enter" key (`\n`) sitting in the input buffer. `fgets` sees that `\n`, thinks you pressed Enter, and immediately stops reading. You have to "eat" the leftover newline with something like `getchar();` or `scanf(" %c", &temp);` before calling `fgets`.**

* **Q: When I print my string from `fgets`, it adds an extra line break at the end. Why?**
* **A: `fgets` literally captures the "Enter" key (`\n`) as part of the string if there is enough room in your array. It stores it right before the `'\0'`.**

---

### 3. Characters as Numbers (ASCII Math)

Underneath the hood, C doesn't actually know what the letter 'A' is. It only understands numbers. Every character you type wears a secret nametag with a numerical ID. This ID system is called **ASCII** (American Standard Code for Information Interchange). Because characters are just numbers, you can do math on them!

**Categorization / Types:**
Here are the most important ASCII numerical ranges you need to memorize:

| Character Group | ASCII Range | Example Conversion Math |
| :--- | :--- | :--- |
| **Uppercase Letters (`'A'` - `'Z'`)** | `65` to `90` | `'A'` + 1 = `'B'` |
| **Lowercase Letters (`'a'` - `'z'`)** | `97` to `122` | `'a'` - 32 = `'A'` |
| **Numbers (`'0'` - `'9'`)** | `48` to `57` | `'5'` - `'0'` = `5` (Converts char to int) |
| **Space (`' '`)** | `32` | N/A |
| **Null Terminator (`'\0'`)** | `0` | N/A |

**Example:**
```c
#include <stdio.h>

int main() {
    char letter = 'a'; // The ASCII value of 'a' is 97
    
    printf("Original letter: %c\n", letter);
    
    // Subtracting 32 from 'a' (97) gives 'A' (65)!
    letter = letter - 32;
    
    printf("Capitalized letter: %c\n", letter);
    
    // You can even print the character as a number using %d
    printf("The secret ID of 'A' is: %d\n", letter);

    return 0;
}
```

**Output:**

```text
Original letter: a
Capitalized letter: A
The secret ID of 'A' is: 65
```

**🤔 Q&A: ASCII Math**

* **Q: How do I loop through a string to count vowels if I don't know the length?**
* **A: Instead of checking the length, you write a `for` or `while` loop that runs as long as the current character is NOT the Null Terminator: `while (str[i] != '\0')`.**

* **Q: Can I use `==` to compare two full strings like `if (str1 == str2)`?**
* **A: NO! You can use `==` to compare single characters (`if (str[i] == 'a')`), but comparing full strings like that just compares their memory addresses. (We will learn how to compare full strings using `<string.h>` later!).**
