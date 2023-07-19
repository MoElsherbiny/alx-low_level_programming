# Function pointers in C

A function pointer is a variable that stores the address of a function that can be later called through that function pointer. This is useful for passing functions as arguments to other functions, returning functions from functions, or storing functions in data structures.

## How to declare a function pointer

The general syntax for declaring a function pointer is:

```c
return_type (*function_pointer_name) (parameter_list);
```

For example, to declare a function pointer that points to a function that takes two `int`s and returns an `int`, we can write:

```c
int (*functionPtr) (int,int);
```

## How to assign a function pointer

To assign a function pointer, we need to use the address of the function that we want to point to. We can use the `&` operator or simply the name of the function. For example, if we have a function called `addInt` that takes two `int`s and returns their sum, we can assign it to our function pointer like this:

```c
functionPtr = &addInt; // or
functionPtr = addInt;
```

## How to call a function pointer

To call a function pointer, we need to dereference it using the `*` operator and pass the arguments as usual. For example, to call our function pointer with arguments 2 and 3, we can write:

```c
int sum = (*functionPtr) (2, 3); // sum == 5
```

Alternatively, we can omit the `*` operator and use parentheses around the function pointer name. For example:

```c
int sum = (functionPtr) (2, 3); // sum == 5
```

## How to pass a function pointer as an argument

To pass a function pointer as an argument to another function, we need to specify the type of the function pointer in the parameter list of the receiving function. For example, if we have a function called `add2to3` that takes a function pointer as an argument and calls it with 2 and 3, we can write:

```c
int add2to3 (int (*functionPtr) (int, int)) {
  return (*functionPtr) (2, 3);
}
```

We can then pass our `functionPtr` variable or any other compatible function pointer to this function. For example:

```c
int result = add2to3 (functionPtr); // result == 5
```

## How to return a function pointer from a function

To return a function pointer from a function, we need to specify the type of the function pointer in the return type of the returning function. For example, if we have a function called `functionFactory` that takes an `int` as an argument and returns a function pointer that takes two `int`s and returns an `int`, we can write:

```c
int (*functionFactory (int n)) (int, int) {
  printf ("Got parameter %d", n);
  int (*functionPtr) (int,int) = &addInt;
  return functionPtr;
}
```

This syntax can be hard to read and write, so it is often preferred to use a `typedef` to create an alias for the function pointer type. For example:

```c
typedef int (*myFuncDef) (int, int); // note that the typedef name is indeed myFuncDef

myFuncDef functionFactory (int n) {
  printf ("Got parameter %d", n);
  myFuncDef functionPtr = &addInt;
  return functionPtr;
}
```

## Where does a function pointer point to in virtual memory

A function pointer points to the start of the executable code of the function in virtual memory. The exact location of the code depends on how the program is loaded and executed by the operating system. Typically, there is a separate segment or section of virtual memory for storing code, called the text segment or code segment. The address of a function is determined by its offset from the base address of this segment.

## How to use markdown for README.MD file

Markdown is a lightweight markup language that allows you to format text using plain text syntax. You can use markdown for creating README.MD files for your projects on platforms like GitHub or Bitbucket. Some of the common markdown elements are:

- Headings: Use one or more `#` symbols at the start of a line to create headings of different levels. For example: `# This is a heading`
- Code blocks: Use three backticks (\`\`\`) before and after a block of code to create a code block. Optionally, you can specify the language of the code for syntax highlighting. For example: \`\`\`c int x = 10; \`\`\`
- Lists: Use `-` or `*` symbols at the start of a line to create an unordered list, or numbers followed by a dot to create an ordered list. For example: `- This is a list item`
- Links: Use square brackets to enclose the link text and parentheses to enclose the link URL. For example: `[This is a link](https://www.bing.com)`
- Bold: Use two asterisks or underscores before and after a word or phrase to make it bold. For example: `**This is bold**`
- Italics: Use one asterisk or underscore before and after a word or phrase to make it italic. For example: `*This is italic*`

For more information and examples, you can check out this [markdown guide](https://www.markdownguide.org/).

