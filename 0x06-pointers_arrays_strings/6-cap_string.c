/**
 * cap_string - capitalizes all words of a string.
 * @s: string arg
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 1, j;
	char *seps = " \t\n,;.!?\"(){}";

	if (s[0] <= 'z' && s[0] >= 'a')
		s[0] = s[0] - ('A' - 'a');

	while (s[i] != '\0')
	{
		j = 0;
		while (seps[j] != '\0')
		{
			if (s[i - 1] == seps[j] && s[i] <= 'z' && s[i] >= 'a')
			{
				s[i] = s[i] + ('A' - 'a');
			}
			j++;
		}
		i++;
	}
	return (s);
}
