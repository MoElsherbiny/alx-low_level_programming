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


#!/bin/bash is called a shebang. It's a special comment that specifies the interpreter to be used to run the script. In this case, it specifies that the script should be run using the Bash shell.

gcc is a compiler for the C programming language. The -c option tells gcc to compile the C file into an object file, without linking it to create an executable. The $CFILE variable is used to specify the name of the C file to compile.

Together, the script #!/bin/bash gcc -c $CFILE compiles a C file specified by the $CFILE variable into an object file, without linking it to create an executable.