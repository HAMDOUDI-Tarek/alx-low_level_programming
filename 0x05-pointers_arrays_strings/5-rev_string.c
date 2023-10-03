#include "main.h"
/**
 * rev_string - reverse a string.
 *@s: the string to reverse.
 */
void rev_string(char *s)
{
	int len, i, j;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	j = len - 1;
	i = 0;

	while (j > i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
		i++;
	}
}
