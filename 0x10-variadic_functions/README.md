# Variadic Functions, va_start, va_arg, and va_end macros, and const type qualifier in C

## Variadic Functions
Variadic functions are functions that can take a variable number of arguments. In C programming, a variadic function adds flexibility to the program. It takes one fixed argument and then any number of arguments can be passed. The variadic function consists of at least one fixed variable and then an ellipsis (…) as the last parameter.

## va_start, va_arg, and va_end macros
The `va_start`, `va_arg`, and `va_end` macros provide a portable way to access the arguments to a function when the function takes a variable number of arguments. The `va_start` macro initializes a `va_list` variable to be used with the `va_arg` and `va_end` macros. The `va_arg` macro retrieves the next argument in the list pointed to by the `va_list` variable. The `va_end` macro ends traversal of the variadic function arguments.

## const type qualifier
The `const` type qualifier declares an object to be non-modifiable. This means that once a variable is declared as `const`, its value cannot be changed. The `const` keyword can be used to modify any fundamental or aggregate type, or a pointer to an object of any type, or a typedef.
