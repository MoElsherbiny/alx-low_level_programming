## Nested Loops

Nested loops are loops inside other loops. They are used when we need to perform a task repeatedly within another task that is already being repeated. For example, if we need to print a multiplication table, we can use nested loops to iterate through the rows and columns.

Here's an example of a nested loop:

```c
for(int i=1; i<=10; i++) {
    for(int j=1; j<=10; j++) {
        printf("%d ", i*j);
    }
    printf("\n");
}
```

This will print the multiplication table from 1 to 10.

## Functions

A function is a block of code that performs a specific task. It allows us to break our program into smaller, more manageable parts. Functions can be called from other parts of the program, making it easier to reuse code and avoid repetition.

To use a function, we first need to declare it. This tells the compiler about the function name, return type, and parameters. Then we can define the function, which is the actual implementation of the function.

Here's an example of a function declaration and definition:

```c
// Function declaration
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}
```

## Declaration vs Definition of a Function

A function declaration tells the compiler about the name, return type, and parameters of the function, but does not provide the implementation. A function definition provides the implementation of the function.

Here's an example of a function declaration and definition:

```c
// Function declaration
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}
```

In this example, the function `add` is declared with the function signature `int add(int a, int b);`. This tells the compiler about the name, return type, and parameters of the function. The function is then defined with the implementation of `return a + b;`.

## Prototype

A function prototype is a declaration of a function that tells the compiler about the name, return type, and parameters of the function. It is used to tell the compiler about a function before it is defined.

Here's an example of a function prototype:

```c
// Function prototype
int add(int a, int b);

int main() {
    int result = add(2, 3);
    printf("Result: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

In this example, the function `add` is declared with a function prototype `int add(int a, int b);` before it is defined. This allows us to use the function `add` in the `main` function before it is defined.

## Scope of Variables

The scope of a variable is the part of the program where the variable is visible and can be accessed. In C, the scope of a variable is determined by where it is declared.

There are three types of variable scopes in C:

- Global scope: A global variable is declared outside of any function and is visible to all functions in the program.
- Local scope: A local variable is declared inside a function and is only visible within that function.
- Block scope: A block variable is declared inside a block of code, such as a loop or conditional statement, and is only visible within that block.

## GCC Flags

GCC (GNU Compiler Collection) is a collection of compilers for various programming languages, including C. The flags `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, and `-std=gnu89` are used to enable certain compiler options.

- `-Wall`: Enables all warning messages.
- `-Werror`: Treats all warnings as errors.
- `-pedantic`: Follows the ANSI C standard more strictly.
- `-Wextra`: Enables additional warning messages.
- `-std=gnu89`: Specifies the C language standard to use (in this case, the GNU C89 standard).

## Header Files

Header files contain function prototypes and type definitions that are needed by other parts of the program. They are typically included using the `#include` directive at the beginning of the program.

Here's an example of how to use a header file:

```c
// Include the standard I/O header file
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
```

In this example, we include the standard I/O header file using `#include <stdio.h>`. This gives us access to the `printf` function, which we use to print "Hello, world!" to the console.
