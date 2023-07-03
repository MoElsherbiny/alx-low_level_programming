## 0. memset
mandatory
Write a function that fills memory with a constant byte.

Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s

# solution
Here's a pseudocode version of the code:

```
function _memset(s, b, n):
    while n > 0:
        s[n - 1] = b
        n = n - 1
    return s
```

The `_memset` function takes three arguments: a pointer to the memory block to be filled (`s`), the value to be set (`b`), and the number of bytes to be filled (`n`).

The function uses a `while` loop to iterate through the memory block starting from the end of the block. In each iteration of the loop, it sets the current byte to the specified value `b` and decrements the number of bytes remaining to be filled `n`. This loop continues until all `n` bytes have been filled with the specified value.

Finally, the function returns a pointer to the memory block that was filled with the specified value.
