/**
  * _islower - check  if the character is in lowercase.
  * @c: character we defind if it's lowercase.
  * Return: return 1 if the character is in lowercase or 0 if not.
  */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = 1;
	else
		result = 0;

	return (result);
}

