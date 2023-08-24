#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to capitalize
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *s)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int new_word = 1;

	for (int i = 0; s[i]; i++)
	{
		int is_separator = 0;
		for (int j = 0; separators[j]; j++)
		{
			if (s[i] == separators[j])
			{
				is_separator = 1;
				break;
			}
		}

		if (is_separator)
		{
			new_word = 1;
		}
		else if (new_word)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= ('a' - 'A');
			}
			new_word = 0;
		}
	}

	return s;
}
