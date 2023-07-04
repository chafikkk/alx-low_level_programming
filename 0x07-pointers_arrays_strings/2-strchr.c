#include "main.h"

/**
 * _strchr - Entry point
 * @s : input
 * @c : input
 * Return : always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	return (NULL);
}
