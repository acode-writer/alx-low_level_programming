#include <stdlib.h>

/**
  * array_range - crates an array of integers.
  * @min: min
  * @max: max
  * Return: a pointer
  */

int *array_range(int min, int max)
{
	int *memory, i;

	if (min > max)
		return (NULL);
	memory = malloc(sizeof(*memory) * (max - min + 1));
	if (memory == NULL)
		return (memory);
	for (i = min; i <= max; i++)
		*(memory + i) = i;
	return (memory);
}
