#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *array;
int i, size;

/* check for invalid inputs */
if (min > max)
return (NULL);

/* calculate the size of the array */
size = max - min + 1;

/* allocate memory for the array */
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);

/* fill the array with values from min to max */
for (i = 0; i < size; i++)
array[i] = min + i;

return (array);
}
