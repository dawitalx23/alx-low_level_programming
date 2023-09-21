/**
 * rot13 - encodes a string using rot13.
 * @s: arg
 *
 * Return: String
 */

char *rot13(char *s)
{
	int i = 0, j;

	char *inputs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *outputs = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; inputs[j] != '\0'; j++)
		{
			if (s[i] == inputs[j])
			{
				s[i] = outputs[j];
				break;
			}
		}
	}
	return (s);
}
