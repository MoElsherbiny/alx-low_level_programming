## Challenge one 
* Write a program that prints _putchar, followed by a new line.
The program should return 0

## Pseudocode:

1. Import the standard input/output library (`stdio.h`) and standard library (`stdlib.h`) (main.h) 
2. Define the `main` function.
3. Within the `main` function, use the `printf` function to print the string `_putchar` to the console.
4. Return the integer value `0` to indicate successful program execution.
5. End the `main` function.

```
BEGIN
    IMPORT stdio.h
    IMPORT stdlib.h

    FUNCTION main():
        PRINT "_putchar"
        RETURN 0
    END FUNCTION
END


```In C programming language, `main.h` is not a standard header file. However
, it is common practice to use a header file with the same name as the main source file,
 which contains declarations and definitions that are used in the main program.

Typically, the `main.h` header file contains function prototypes and macros that are
 used in the main function or in other functions defined in the main source file.
 For example, if you have a function `calculate()` defined in the main source file,
 you can declare its prototype in `main.h` like this:

```
#ifndef MAIN_H
#define MAIN_H

double calculate(double x, double y);

#endif
```

The `#ifndef` directive is used to prevent multiple inclusions of the header file,
 which can cause compilation errors and other problems
. The `#define` directive defines a preprocessor macro `MAIN_H`, which is used to check if the header file has already been included. The `#endif` directive ends the conditional inclusion block.

In addition to function prototypes, `main.h` can also define constants, data types,
 and other declarations that are used in the main program.
 For example, if you have a constant `PI` that is used in the main program,
 you can define it in `main.h` like this:

```
#define PI 3.141592653589793
```

This defines the macro `PI` as a constant with the value of pi. When the main source file includes `main.h`, it can use the `PI` macro in the code.

Overall, `main.h` is a header file that is used to organize and modularize the code in the main program. It helps to separate the interface (declarations) from the implementation (definitions), making the code more readable and maintainable.



## Challenge two --->  Write a function that prints the alphabet, in lowercase, followed by a new line.


### Pseudocode
 
```
FUNCTION print_alphabet
    FOR Loop character c from 'a' to 'z'
        PRINT c
    END FOR
    PRINT newline
END FUNCTION
```
# Explanation of Code

## Introduction
This program is a simple C program that prints the lowercase alphabet to the console. It demonstrates the use of functions, loops, and basic input/output operations.

## Code Explanation
The code can be broken down into the following parts:

### Include Directives
```
#include <stdio.h>
```
This preprocessor directive includes the standard input/output library, which provides functions for input and output operations.

### Function Definition
```
void print_alphabet(void)
```
This is a function definition that defines a function called `print_alphabet`. It takes no arguments and returns void (i.e., nothing). The function header is commented to describe what the function does.

### For Loop
```
for (char c = 'a'; c <= 'z'; c++)
{
    putchar(c);
}
```
This `for` loop iterates over the lowercase alphabet from 'a' to 'z'. Inside the loop, the `putchar()` function is called to print each character to the console.

### Newline Character
```
putchar('\n');
```
This `putchar()` statement is used to print a newline character after the loop completes, which ensures that the output is properly formatted.

### Main Function
```
int main(void)
{
    print_alphabet();
    return 0;
}
```
This is the entry point of the program. The `main()` function calls the `print_alphabet()` function and returns 0 to indicate successful execution.

