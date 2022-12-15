/**
  * _isupper - check if the character is uppercase.
  * @c: the character.
  * Return: return 1 if c is uppercase or 0 otherwise
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
