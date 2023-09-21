/**
 * cap_string - capitalizes all words of a string.
 * @s: string arg
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] <= 'z' && s[0] >= 'a')
		s[0] = s[0] - ('A' - 'a');

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			if (s[i + 1] <= 'z' && s[i + 1] >= 'a')
				s[i + 1] = s[i + 1] + ('A' - 'a');
		}
	}
	return (s);
}
