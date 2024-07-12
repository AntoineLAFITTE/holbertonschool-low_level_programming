#ifndef DOG_H
#define DOG_H


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

/* new type definition */
typedef struct dog dog_t;

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
