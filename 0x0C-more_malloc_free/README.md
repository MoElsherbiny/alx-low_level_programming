## explain those functions in C language.

- `exit (3)` is a function that terminates the program normally with a specified exit status. The exit status is an integer value that can be used by other programs or scripts to check the outcome of the program. The argument `3` means that the program will exit with a status of 3, which usually indicates some kind of error or failure¹.
- `calloc` is a function that allocates memory dynamically for an array of elements of a certain size. It also initializes the allocated memory to zero, which means that all the bytes in the memory are set to 0. The function takes two arguments: the number of elements and the size of each element. It returns a pointer to the allocated memory, or NULL if the allocation fails².
- `realloc` is a function that changes the size of a previously allocated memory block. It can be used to increase or decrease the amount of memory available for an array or a structure. The function takes two arguments: a pointer to the old memory block and the new size in bytes. It returns a pointer to the new memory block, which may be the same as the old one or a different location. If the new size is larger than the old one, the additional memory is not initialized. If the new size is smaller than the old one, some data may be lost. If the allocation fails, the function returns NULL and leaves the old memory block unchanged³.

Here is an example of using these functions:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr; // declare a pointer to int
    int n = 10; // initial number of elements
    int i; // loop variable

    // allocate memory for 10 int elements and initialize to zero
    arr = calloc(n, sizeof(int));
    if (arr == NULL) // check if allocation succeeded
    {
        printf("Memory allocation failed\n");
        exit(1); // terminate with status 1
    }

    // print the initial values of the array
    printf("Initial values:\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // reallocate memory for 20 int elements
    arr = realloc(arr, 2 * n * sizeof(int));
    if (arr == NULL) // check if reallocation succeeded
    {
        printf("Memory reallocation failed\n");
        exit(2); // terminate with status 2
    }

    // print the new values of the array
    printf("New values:\n");
    for (i = 0; i < 2 * n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // free the allocated memory
    free(arr);

    return 0;
}
```

The output of this program would look something like this:

```
Initial values:
arr[0] = 0
arr[1] = 0
arr[2] = 0
arr[3] = 0
arr[4] = 0
arr[5] = 0
arr[6] = 0
arr[7] = 0
arr[8] = 0
arr[9] = 0
New values:
arr[0] = 0
arr[1] = 0
arr[2] = 0
arr[3] = 0
arr[4] = 0
arr[5] = 0
arr[6] = 0
arr[7] = 0
arr[8] = 0
arr[9] = 0
arr[10] = -16777216 // some random value from uninitialized memory
arr[11] = -16777216 // some random value from uninitialized memory
arr[12] = -16777216 // some random value from uninitialized memory
arr[13] = -16777216 // some random value from uninitialized memory
arr[14] = -16777216 // some random value from uninitialized memory
arr[15] = -16777216 // some random value from uninitialized memory
arr[16] = -16777216 // some random value from uninitialized memory
arr[17] = -16777216 // some random value from uninitialized memory
arr[18] = -16777216 // some random value from uninitialized memory
arr[19] = -16777216 // some random value from uninitialized memory

```

