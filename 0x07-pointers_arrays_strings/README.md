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

## 1-memcpy.c 
## pseudocode version of the code:

```
function _memcpy(dest, src, n):
    i = 0
    while i < n:
        dest[i] = src[i]
        i = i + 1
    return dest
```

The `_memcpy` function takes three arguments: a pointer to the destination memory area (`dest`), a pointer to the source memory area (`src`), and the number of bytes to copy (`n`).

The function uses a `while` loop to iterate through the source and destination memory areas. In each iteration of the loop, it copies the current byte from the source memory area to the corresponding byte in the destination memory area, and then increments the index `i` to move to the next byte. This loop continues until `n` bytes have been copied.

Finally, the function returns a pointer to the destination memory area.

## 2-strchr.c 
##  here's a pseudocode version of the code:

```
function _memcpy(dest, src, n):
    i = 0
    while i < n:
        dest[i] = src[i]
        i = i + 1
    return dest
```

The `_memcpy` function takes three arguments: a pointer to the destination memory area (`dest`), a pointer to the source memory area (`src`), and the number of bytes to copy (`n`).

The function uses a `while` loop to iterate through the source and destination memory areas. In each iteration of the loop, it copies the current byte from the source memory area to the corresponding byte in the destination memory area, and then increments the index `i` to move to the next byte. This loop continues until `n` bytes have been copied.

Finally, the function returns a pointer to the destination memory area.

## here's a pseudocode version of the code:  3-strspn.c

```
function _strspn(s, accept):
    bytes = 0
    i = 0
    while s[i] != '\0':
        for j = 0 to length(accept) - 1:
            if accept[j] == s[i]:
                bytes = bytes + 1
                break
            else if j == length(accept) - 1:
                return bytes
        i = i + 1
    return bytes
```

The `_strspn` function takes two arguments: a pointer to the string to search (`s`), and a pointer to the characters to search for (`accept`).

The function uses a `while` loop to iterate through the characters in the input string `s`. For each character, it uses a `for` loop to iterate through the characters in the reference string `accept`. If the character in `s` matches a character in `accept`, the count of matching bytes `bytes` is incremented and the `for` loop is broken. If the character in `s` does not match any character in `accept`, the function immediately returns the current count of matching bytes. The `while` loop continues until the end of the input string is reached.

Finally, the function returns the total count of matching bytes.
