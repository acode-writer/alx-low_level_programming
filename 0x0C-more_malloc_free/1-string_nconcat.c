#include <stdlib.h>
/**
  * string_nconcat - a function that concatenates two strings.
  * @s1: a string
  * @s2: the string to concatenates with s1.
  * @n: number of bytes to copies
  * Return: Newly allocated memory, which contains s1 + n first bytes of s2.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = 0, s2_length = 0, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_length) != '\0')
		s1_length++;
	while (*(s2 + s2_length) != '\0')
		s2_length++;

	if (n >= s2_length)
		n = s2_length;
	s = malloc(s1_length + n + 1);
	if (s == NULL)
		return (s);
	for (i = 0; i < s1_length; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[s1_length + i] = s2[i];
	s[s1_length + i] = '\0';
	return (s);
}
