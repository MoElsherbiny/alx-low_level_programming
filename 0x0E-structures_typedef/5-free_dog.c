#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to a dog structure
 */
void free_dog(dog_t *d)
{
if (d != NULL) // check if d is not NULL
{
free(d->name); // free the memory allocated for name
free(d->owner); // free the memory allocated for owner
free(d); // free the memory allocated for the structure
}
}
