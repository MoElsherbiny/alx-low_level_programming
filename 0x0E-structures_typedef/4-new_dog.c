#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to a new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog; // pointer to a dog structure
char *name_copy; // pointer to a copy of name
char *owner_copy; // pointer to a copy of owner
int i, j; // loop variables

// allocate memory for the structure
dog = malloc(sizeof(dog_t));
if (dog == NULL) // check if allocation failed
return (NULL);

// find the length of name
for (i = 0; name[i] != '\0'; i++)
;

// allocate memory for name_copy
name_copy = malloc(sizeof(char) * (i + 1));
if (name_copy == NULL) // check if allocation failed
{
free(dog); // free the memory allocated for the structure
return (NULL);
}

// copy name to name_copy
for (j = 0; j <= i; j++)
name_copy[j] = name[j];

// find the length of owner
for (i = 0; owner[i] != '\0'; i++)
;

// allocate memory for owner_copy
owner_copy = malloc(sizeof(char) * (i + 1));
if (owner_copy == NULL) // check if allocation failed
{
free(name_copy); // free the memory allocated for name_copy
free(dog); // free the memory allocated for the structure
return (NULL);
}

// copy owner to owner_copy
for (j = 0; j <= i; j++)
owner_copy[j] = owner[j];

// assign values to members of the structure
dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;

return (dog); // return the pointer to the structure
}
