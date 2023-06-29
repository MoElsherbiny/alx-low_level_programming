#include "main.h"

/**
* Function _strcat(dest, src)
* Initialize index to 0 and dest_len to 0
* While dest[index] is not null
* Increment index
* Increment dest_len
* End While
* For index from 0 to the end of src
* Set dest[dest_len] to src[index]
* Increment dest_len
* End For
* Return dest
*/

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
