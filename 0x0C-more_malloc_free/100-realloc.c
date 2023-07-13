#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
char *old_ptr, *filler;
unsigned int i, min_size;

/* check for special cases */
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
return (malloc(new_size));
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* allocate memory for the new block */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

/* copy the contents of the old block to the new block */
old_ptr = ptr;
filler = new_ptr;
min_size = (new_size > old_size) ? old_size : new_size;
for (i = 0; i < min_size; i++)
filler[i] = old_ptr[i];

/* free the old block */
free(ptr);

return (new_ptr);
}
