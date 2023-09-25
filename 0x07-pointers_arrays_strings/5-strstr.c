#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: arg1
 * @needle: arg2
 *
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	char *result, *temp;

	if (!*needle)
	{
		return (haystack);
	}

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			result = haystack;
			temp = needle;

			while (*temp)
			{
				if (*temp++ != *haystack++)
				{
					haystack = result;
					break;
				}
			}
			if (result != haystack)
			{
				return (result);
			}
		}
		haystack++;
	}
	return (0);
}
