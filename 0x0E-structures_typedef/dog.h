#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - A struct thst displays Dog attributes
 * @name: Dog name be considered
 * @age: dog age to be considered
 * @owner: The owner of the dog
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
