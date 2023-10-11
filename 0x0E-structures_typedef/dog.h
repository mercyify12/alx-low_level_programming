#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the basic information and description about a dog
 * @name: First member of the element
 * @age: Second member of the element
 * @owner: Third member of the element
 * Description: Longer description if structures
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - the function typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
