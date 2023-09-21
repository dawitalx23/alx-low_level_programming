/**
 * leet - method
 * @s: arg
 *
 * Return: string
 */

char *leet(char *s)
{
	int i = 0, j;

	char *letters = "aAeEoOtTlL";
	char *leets = "43071";

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leets[j / 2];
			}
		}
	}
	return (s);
}
