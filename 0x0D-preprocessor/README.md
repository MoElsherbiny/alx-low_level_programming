## What are macros and how to use them

A macro is a piece of code in a program that is replaced by the value of the macro. Macro is defined by `#define` directive. Whenever a macro name is encountered by the compiler, it replaces the name with the definition of the macro. Macro definitions need not be terminated by a semi-colon (`;`).¹

Macros can be used for various purposes, such as:

- Replacing symbolic names with numerical or variable values
- Creating function-like macros that perform calculations or operations
- Conditional compilation of code blocks depending on certain conditions

To use macros, you need to define them using the `#define` directive, followed by the macro name and the macro value. For example:

```c
#define PI 3.14 // defines a macro named PI with the value 3.14
```

You can also define function-like macros that take arguments and return a value. For example:

```c
#define SUM(x, y) ((x) + (y)) // defines a macro named SUM that takes two arguments and returns their sum
```

You can use macros in your code by writing their names as if they were variables or functions. For example:

```c
float area = PI * r * r; // uses the macro PI to calculate the area of a circle
int s = SUM(10, 20); // uses the macro SUM to calculate the sum of two numbers
```

## What are the most common predefined macros

Predefined macros are macros that are already defined by the compiler or the standard library. They can provide useful information about the program, such as:

- The name of the file it was compiled from (`__FILE__`)
- The current line number in the source file (`__LINE__`)
- The date and time of compilation (`__DATE__` and `__TIME__`)
- The version of the compiler (`__STDC_VERSION__`)
- Whether a certain feature is supported or not (`__STDC__`, `__STDC_HOSTED__`, etc.)

You can use predefined macros in your code without defining them yourself. For example:

```c
printf("This program was compiled on %s at %s\n", __DATE__, __TIME__); // prints the date and time of compilation
printf("This is line %d in file %s\n", __LINE__, __FILE__); // prints the current line number and file name
```

## How to include guard your header files in C

Include guards are a technique to prevent multiple inclusion of header files in C programs. Multiple inclusion can cause errors or warnings due to redefinition of symbols or types.

To include guard your header files, you need to use conditional directives such as `#ifndef`, `#define` and `#endif`. These directives check whether a certain macro is defined or not, and include or skip a block of code accordingly.

The general syntax for include guards is:

```c
#ifndef HEADER_FILE_NAME_H // checks if the macro HEADER_FILE_NAME_H is not defined
#define HEADER_FILE_NAME_H // defines the macro HEADER_FILE_NAME_H

// header file content goes here

#endif /* HEADER_FILE_NAME_H */ // ends the conditional block
```

The macro name used for include guards should be unique and related to the header file name. For example, if your header file is named `my_header.h`, you can use `MY_HEADER_H` as the macro name.

Include guards ensure that the header file content is included only once in each source file that includes it. For example, if you have two source files `main.c` and `func.c` that both include `my_header.h`, then the header file content will be included only once in each file.


¹: [Macros and its types in C/C++ - GeeksforGeeks](https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/)
