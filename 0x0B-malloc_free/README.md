# Difference between automatic and dynamic allocation

- Automatic allocation is when memory is allocated upon entry into a block (such as a function or a loop) and exists for the duration of that block. The memory is usually allocated on the stack, and variables have a limited scope.
- Dynamic allocation is when memory is allocated when you explicitly request it (such as using `malloc` or `calloc`) and exists until you explicitly free it. The memory is allocated on the heap, and you can access it using pointers.

| Allocation type | Memory location | Scope | Lifetime | Example |
| --------------- | --------------- | ----- | -------- | ------- |
| Automatic       | Stack           | Block | Block    | `int x = 10;` |
| Dynamic         | Heap            | Any   | Manual   | `int *p = malloc(sizeof(int));` |

¹²³

# Malloc and free in C

- `malloc` is a function that allocates a block of memory of a given size and returns a pointer to it. The memory is not initialized, so it may contain garbage values.
- `free` is a function that deallocates a block of memory that was previously allocated by `malloc` or `calloc`. It takes a pointer to the memory as an argument and returns nothing.
- To use `malloc` and `free`, you need to include the `<stdlib.h>` header file in your program.
- You should always check if `malloc` returns a NULL pointer, which means the allocation failed. You should also always free the memory that you allocate when you no longer need it, to avoid memory leaks.

## Example of malloc and free in C

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, *ptr, sum = 0;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  ptr = (int*) malloc(n * sizeof(int)); // allocate memory for n integers

  if(ptr == NULL) { // check if allocation succeeded
    printf("Error! Memory not allocated.\n");
    exit(0);
  }

  printf("Enter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i); // read elements into the allocated memory
    sum += *(ptr + i); // calculate the sum
  }

  printf("Sum = %d\n", sum); // print the sum

  free(ptr); // free the allocated memory

  return 0;
}
```

 

# Why and when use malloc

- You should use `malloc` when you need to allocate memory dynamically, that is, when you don't know the size or number of elements beforehand, or when they may change during the execution of the program.
- Some advantages of using `malloc` are:
  - It allows you to create data structures of variable size, such as linked lists, trees, graphs, etc.
  - It allows you to create arrays of any size at run-time, instead of using fixed-size arrays that may waste memory or be insufficient.
  - It allows you to return local variables from functions without losing their values, by returning pointers to them instead.
- Some disadvantages of using `malloc` are:
  - It may fail to allocate memory if there is not enough space available, so you need to handle this possibility in your code.
  - It may cause memory leaks if you forget to free the memory that you allocate, or if you lose the pointer to it.
  - It may cause fragmentation of the heap, which can affect the performance and efficiency of your program.

# How to use valgrind to check for memory leak

- Valgrind is a tool that can help you detect memory leaks and other memory-related errors in your C programs. To use it, you need to install it on your system and then run your program with valgrind as a prefix.
- For example, if your program is called `myprog`, you can run it with valgrind like this:

```bash
valgrind ./myprog
```

- Valgrind will then execute your program and monitor its memory usage. When your program finishes or terminates, valgrind will print a summary of the memory errors and leaks that it detected, along with some details about their locations and causes.
- For example, here is an output of valgrind for a program that has a memory leak:

```bash
==1234== Memcheck, a memory error detector
==1234== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1234== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1234== Command: ./myprog
==1234==
Hello, world!
==1234==
==1234== HEAP SUMMARY:
==1234==     in use at exit: 4 bytes in 1 blocks
==1234==   total heap usage: 2 allocs, 1 frees, 1,028 bytes allocated
==1234==
==1234== LEAK SUMMARY:
==1234==    definitely lost: 4 bytes in 1 blocks
==1234==    indirectly lost: 0 bytes in 0 blocks
==1234==      possibly lost: 0 bytes in 0 blocks
==1234==    still reachable: 0 bytes in 0 blocks
==1234==         suppressed: 0 bytes in 0 blocks
==1234== Rerun with --leak-check=full to see details of leaked memory
==1234==
==1234== For counts of detected and suppressed errors, rerun with: -v
==1234== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

- You can see that valgrind detected a memory leak of 4 bytes, which was definitely lost. You can also see that the program allocated memory twice, but freed it only once. To see more details about the leak, you can rerun valgrind with the `--leak-check=full` option, which will show you the source code line where the leak occurred.


(1) DHCP Address Assignment and Allocation Mechanisms. http://www.tcpipguide.com/free/t_DHCPAddressAssignmentandAllocationMechanisms.htm.
(2) Automatic vs dynamic memory allocation: what to consider?. https://stackoverflow.com/questions/50667681/automatic-vs-dynamic-memory-allocation-what-to-consider.
(3) Static allocation vs. Dynamic allocation vs. Automatic allocation. https://stackoverflow.com/questions/1534999/static-allocation-vs-dynamic-allocation-vs-automatic-allocation.