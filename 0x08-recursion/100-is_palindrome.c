int _strlen(char *s, int len);
int _ispalindrome(char *s, int len);

/**
 * is_palindrome - check if string is palindrome
 * @s: arg
 *
 * Return: 1 if pal elese 0
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen(s, 0);

	return (_ispalindrome(s, len - 1));
}

/**
 * _strlen - returns string length
 * @s: arg1
 * @len: arge2
 *
 * Return: int length
 */

int _strlen(char *s, int len)
{
	if (!*s)
	{
		return (len);
	}
	return (_strlen(s + 1, len + 1));
}

/**
 * _ispalindrome - checks palins
 * @s: arg1
 * @len: arg2
 *
 * Return: 1 pal else 0
 */

int _ispalindrome(char *s, int len)
{
	if (*s != *(s + len))
	{
		return (0);
	}

	if (!*s)
	{
		return (1);
	}
	return (_ispalindrome(s + 1, len - 2));
}
