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




