#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: result.
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len1, len2, i, j;

	len1 = len2 = i = j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++;

	conc = malloc(sizeof(char) * (len1 + len2));

	if (conc == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		*(conc + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(conc + i) = *(s2 + j);
		i++, j++;
	}

	return (conc);
}
