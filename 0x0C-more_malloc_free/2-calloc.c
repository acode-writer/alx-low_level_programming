#include <stdlib.h>

/**
  * _calloc - allocates memory for an array.
  * @nmemb: number of element of the array.
  * @size: size of bytes of each member of the array.
  * Return: the allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (memory);
	for (i = 0; i < (nmemb * size); i++)
		*(memory + i) = 0;
	return (memory);
}
