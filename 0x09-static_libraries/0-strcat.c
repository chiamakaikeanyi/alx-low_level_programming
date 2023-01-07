#include "main.h"
/**
 *_strcat - function that concatenates two strings.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *
 *Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int count = 0, count2 = 0;

while (*(dest + count) != '\0')
{
count++;
}

while (count2 >= 0)
{
*(dest + count) = *(src + count2);
if (*(src + count2) == '\0')
break;
count++;
count2++;
}
return (dest);
}
