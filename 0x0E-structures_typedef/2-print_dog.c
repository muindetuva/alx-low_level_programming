#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
  * print_dog - print the structure dog
  * @d: pointer to the struct in memory location
  *
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("NAME: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Age: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
