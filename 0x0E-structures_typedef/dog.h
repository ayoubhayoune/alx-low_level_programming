#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog's attributes.
 * @name: Pointer to dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to owner's name.
 *
 * Description: dog struct in a big word
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
