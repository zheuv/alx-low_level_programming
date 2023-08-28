#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
	}

	return (0);
}
