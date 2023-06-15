# Challenge 1 

This is a simple challenge to write a script that runs a C file through the preprocessor and saves the result into another file. The C file name will be saved in the variable `$CFILE`, and the output should be saved in the file `c`. 

### Solution 

Here's a Bash script that uses the GNU Compiler Collection (GCC) with the `-E` option to preprocess a C file specified by the `$CFILE` variable and saves the preprocessed output into a file named "c":

```
#!/bin/bash
gcc -E $CFILE -o c
```

When this script is run, the `$CFILE` variable should be set to the name of the C file that needs to be preprocessed. For example, if the script is saved as "preprocess.sh" and the C file that needs to be preprocessed is named "example.c", you would run the script like this:

```
./preprocess.sh example.c
```

This would preprocess "example.c" and save the result into a file named "c" in the current directory.

### Explanation

This code is a Bash script that runs the GNU Compiler Collection (GCC) with the `-E` option to preprocess a C file specified by the `$CFILE` variable and saves the preprocessed output into a file named "c". The shebang line `#!/bin/bash` specifies that the script should be run using the Bash shell.

The `gcc -E $CFILE -o c` command runs GCC with the `-E` option to preprocess the C file specified by the `$CFILE` variable. The `-E` option tells GCC to only run the preprocessor and not to perform any compilation or linking. The `-o` option specifies the output file name, which in this case is "c". 

Overall, this script provides a simple way to preprocess C files using GCC and can be easily customized for different use cases.


# Challenge 2
Write a script that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o

### Solution 
```
#!/bin/bash
gcc -c $CFILE
```

### Explanation
#!/bin/bash is called a shebang. It's a special comment that specifies the interpreter to be used to run the script. In this case, it specifies that the script should be run using the Bash shell.

gcc is a compiler for the C programming language. The -c option tells gcc to compile the C file into an object file, without linking it to create an executable. The $CFILE variable is used to specify the name of the C file to compile.

Together, the script #!/bin/bash gcc -c $CFILE compiles a C file specified by the $CFILE variable into an object file, without linking it to create an executable.


# Challenge 3
Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

### Solution 
```
#!/bin/bash
gcc -c $CFILE
```

### Explanation
* The #!/bin/bash line tells the shell that the script is written in bash.
* The gcc -c $CFILE line tells the gcc command to compile * * the C file into an object file. The C file name is saved in the variable $CFILE.
* The gcc command will automatically create an output file with the same name as the C file, but with the extension .o.
* The assembly code for the C code will be saved in the object file.




# Challenge 4
- Write a script that compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable $CFILE

### Solution 
```
#!/bin/bash
gcc $CFILE -o cisfun

```

### Explanation
* The -o option tells the gcc command to output the compiled code to the file specified by the argument. In this case, the argument is cisfun.
*  The gcc command will compile the C file into machine code. Machine code is a series of instructions that can be executed by the computer's processor.
* The executable file cisfun will be able to be run by the user by typing the command ./cisfun in the terminal.


# Challenge 5
- Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0

### Solution 

```
#include <stdio.h>

int main() {
    puts("Programming is like building a multilingual puzzle");
    return 0;
}
```
### Explanation
* This program includes the stdio.h header file, which provides the declaration for the puts() function. The main() function calls the puts() function with the required text as an argument.

* Note that the puts() function automatically adds a new line to the end of the string it prints, so we don't need to include a separate \n character.

* Finally, the program returns 0 to indicate successful completion.


# Challenge 6
- Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using the -Wall gcc option

### Solution 

````
#include <stdio.h>

int main()
{
printf("with proper grammar, but the outcome is a piece of art,\n");
	return 0;
}

````

# Challenge 7
- Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
Warnings are allowed
- Your program should return 0
- You might have to install the package libc6-dev-i386 on 
- your Linux to test the -m32 gcc option

### Solution 
````
#include <stdio.h>

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
````


## Explanation of C Program

This is a simple C program that prints out the size of different data types in bytes using the `sizeof` operator. Here's a breakdown of each line in the program:

```c
#include <stdio.h>
```
The `#include <stdio.h>` line tells the compiler to include the `stdio.h` header file. This header file contains declarations for the `printf()` function.

```c
int main(void)
```
The `int main(void)` line declares the `main()` function. The `main()` function is the entry point for all C programs.

```c
char a;
```
The `char a;` line declares a variable named `a` of type `char`. The `char` type is a single-byte data type that can store a single character.

```c
int b;
```
The `int b;` line declares a variable named `b` of type `int`. The `int` type is a four-byte data type that can store integers from -32,768 to 32,767.

```c
long int c;
```
The `long int c;` line declares a variable named `c` of type `long int`. The `long int` type is an eight-byte data type that can store integers from -2,147,483,648 to 2,147,483,647.

```c
long long int d;
```
The `long long int d;` line declares a variable named `d` of type `long long int`. The `long long int` type is a sixteen-byte data type that can store integers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.

```c
float f;
```
The `float f;` line declares a variable named `f` of type `float`. The `float` type is a four-byte data type that can store floating-point numbers with a precision of about six decimal places.

```c
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
```
The `printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));` line prints the size of the `char` data type. The `sizeof()` operator returns the size of its operand in bytes. The `unsigned long` cast ensures that the result is an unsigned long value, which can be printed by the `printf()` function.

```c
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
```
The `printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));` line prints the size of the `int` data type.

```c
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
```
The `printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));` line prints the size of the `long int` data type.

```c
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
```
The `printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));` line prints the size of the `long long int` data type.

```c
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
```
The `printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));` line prints the size of the `float` data type.

```c
return (0);
```
The `return (0);` line returns the value 0 from the `main()` function. This indicates that the program terminated successfully.