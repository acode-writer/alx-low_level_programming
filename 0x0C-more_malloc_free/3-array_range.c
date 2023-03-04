#include <stdlib.h>

/**
  * array_range - crates an array of integers.
  * @min: min
  * @max: max
  * Return: a pointer
  */

int *array_range(int min, int max)
{
	int *memory, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	memory = malloc(sizeof(*memory) * size);
	if (memory == NULL)
		return (memory);
	for (i = min; i < size; i++)
		*(memory + i) = min++;
	return (memory);
}
