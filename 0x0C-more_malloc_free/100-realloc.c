#include <stdlib.h>

/**
  * _realloc - function that realloc a memory using mallov and free.
  * @ptr: pointer to the memory previously allocated with a call to malloc.
  * @old_size: the size in bytes of tje allocated space for ptr.
  * @new_size: the new size in bytes of the new memory block
  * Return: new allocated memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size > old_size)
	{
		free(ptr);
		ptr = (int *) malloc(new_size);
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (ptr = (int *) malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
