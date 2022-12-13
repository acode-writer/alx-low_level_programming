/**
  * _isalpha - check is if character is alphabetic.
  * @c : character to check.
  * Return: return 1 if alpha or 0 if not.
  */
int _isalpha(int c)
{
	int result;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		result = 1;
	else
		result = 0;

	return (result);
}
