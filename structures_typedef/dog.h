#ifndef dog_
#define dog_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct dog - Represents details of a dog
 * @name: The name of the dog of type: char *.
 * @age: The age of the dog of type: float.
 * @owner: The name of the dog's owner of type: char *.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
