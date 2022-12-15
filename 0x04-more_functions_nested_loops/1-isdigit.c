/**
  * _isdigit - check if the param is a number
  * @n: the parameter.
  * Return: 1 if param's a number or 0 otherwise.
  */
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}
