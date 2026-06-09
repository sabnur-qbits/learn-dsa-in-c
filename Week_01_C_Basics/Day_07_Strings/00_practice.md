# 💻 Day 07 Practice: Strings (Character Arrays)

Read the `00_Theory.md` file before starting. Today is all about text! 
**Golden Rules for Today:**
1. A string is just an array of `char`.
2. Every string in C absolutely must end with the Null Terminator `'\0'`.
3. Try to solve these *without* using the `<string.h>` library first to build your logic!

---

## Part 1: String Drills (Traversing Text)

### 1. The Name Tag
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_07_Strings/`
* **File Name:** `01_name_tag.c`
* **Task:** Create a character array to hold a single word (no spaces). Ask the user for their first name using `scanf` and `%s`. Print a greeting. *(Note: When using `%s` in `scanf` with a character array, you actually don't need the `&` symbol! Read the theory file to see why).*
* **Expected Output:**
    ```text
    Enter your first name: Sakshi
    Hello, Sakshi!
    ```

### 2. The Manual Ruler (Find Length)
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_07_Strings/`
* **File Name:** `02_string_length.c`
* **Task:** Ask the user for a single word. Write a `while` or `for` loop to count how many characters are in the word. The loop should stop when it hits the invisible Null Terminator (`'\0'`). Do NOT use `strlen()`.
* **Expected Output:**
    ```text
    Enter a word: Programming
    The word has 11 letters.
    ```

### 3. Vowel Detector
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_07_Strings/`
* **File Name:** `03_vowel_count.c`
* **Task:** Ask the user for a word in lowercase. Loop through the character array and count exactly how many vowels (a, e, i, o, u) are in the word.
* **Expected Output:**
    ```text
    Enter a word: algorithm
    There are 3 vowels in 'algorithm'.
    ```

### 4. The Yelling String (ASCII Math)
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_07_Strings/`
* **File Name:** `04_uppercase.c`
* **Task:** Ask for a lowercase word. Loop through the array and convert every lowercase letter to an UPPERCASE letter. 
    * *Hint: Characters are just numbers under the hood (ASCII values). To turn 'a' into 'A', you just subtract 32 from it! `str[i] = str[i] - 32;`*
* **Expected Output:**
    ```text
    Enter a lowercase word: hello
    Yelling: HELLO
    ```

---

## Part 2: Algorithmic Challenges (Spaces & Pointers Intro)

### 5. The Sentence Reader (Dealing with Spaces)
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_07_Strings/`
* **File Name:** `05_full_sentence.c`
* **Task:** `scanf` using `%s` breaks as soon as it sees a space. To read a full sentence with spaces, you need to use `fgets()`. Ask the user for their full name and print it.
* **Expected Output:**
    ```text
    Enter your full name: Sakshi Kumari
    Welcome to the system, Sakshi Kumari!
    ```

### 6. The Space Invader (Word Counter)
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_07_Strings/`
* **File Name:** `06_word_count.c`
* **Task:** Ask the user for a full sentence using `fgets()`. Loop through the string and count how many words there are. 
    * *Hint: How do you know a new word started? You count the spaces (`' '`)! If there are 3 spaces, there are usually 4 words.*
* **Expected Output:**
    ```text
    Enter a sentence: I love coding in C.
    There are 5 words in that sentence.
    ```

### 7. Palindrome Checker
* **Directory:** `DSA_Workspace/Week_01_C_Basics/Day_07_Strings/`
* **File Name:** `07_palindrome.c`
* **Task:** Ask the user for a single word. Check if the word is a palindrome (reads the same forwards and backwards, like "racecar" or "madam"). 
    * *Hint: You will need the length of the string. Compare the first letter with the last, the second with the second-to-last, etc.*
* **Expected Output (Success):**
    ```text
    Enter a word: racecar
    'racecar' is a Palindrome!
    ```
* **Expected Output (Fail):**
    ```text
    Enter a word: hello
    'hello' is NOT a Palindrome.
    ```