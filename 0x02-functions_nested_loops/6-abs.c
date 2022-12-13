/**
  * _abs - absolute value of an integer.
  * @n: an integer.
  * Return: return the absolute value of an integer.
  */
int _abs(int n)
{
	int value;

	if (n >= 0)
		value = n;
	else
		value = (-1) * n;

	return (value);
}
