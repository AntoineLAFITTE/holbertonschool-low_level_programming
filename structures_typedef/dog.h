#ifndef DOG_H
#define DOH_H

/**
 * struct dog - Stucture for storage of dog's informations.
 * @name: Name of the dog (char pointer)
 * @age: Age of the dog (float)
 * @owner: Name of the dog owner (char pointer)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
