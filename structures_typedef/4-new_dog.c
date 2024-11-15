#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -function that creates a new dog.
 * @name: the  dog name
 * @age: age of the dog
 * @owner: the owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (name == NULL || owner == NULL) 
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (strlen(name) + 1));
dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (dog->name == NULL || dog->owner == NULL)
{
free(dog->name);  
free(dog->owner);
free(dog);
return (NULL);
}
strcpy(dog->name, name);
strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
