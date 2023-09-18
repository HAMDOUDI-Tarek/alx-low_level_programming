#include "main.h"
/**
 * rev_string - reverse a string.
 *@s: the string to reverse.
 */
void rev_string(char *s)
{
	int len, i, j;
	char s1, s2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	j = len - 1;
	i = 0;

	while (j > i)
	{
		s1 = s[i];
		s2 = s[j];
		s[i] = s2;
		s[j] = s1;
		j--;
		i++;
	}
}
