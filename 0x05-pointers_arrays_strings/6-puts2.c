#include "main.h"
/**
 * puts2 - prints every other character of a string.
 *@str: the string to use.
 */
void puts2(char *str)
{
        int i = 0, count = 0;

        while (*(s + count) != '\0')
        {
                count++;
        }

        while (i != count)
        {
                putchar(s[i]);
                i += 2;
        }
        putchar('\n');
}
