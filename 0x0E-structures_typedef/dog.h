#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type
 *
 * @name: character to take the dog's name
 * @age: dog's age to take a float value
 * @owner: character to take dog's owner
 *
 * Description: data type to group information about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
