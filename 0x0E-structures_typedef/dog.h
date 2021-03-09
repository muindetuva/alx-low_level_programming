#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Characteristics of a dog
 * @name: The dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
