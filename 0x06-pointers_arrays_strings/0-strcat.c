#include "main.h"

/**
 * _strcat -function that concatenates two strings
 *@dest: First pointer
 *@src: Second pointer
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int length_1 = 0;
	int length_2 = 0;

	while (dest[length_1] != '\0')
	{
		length_1++;
	}
	while (src[length_2] != '\0')
	{
		dest[length_1] = src[length_2];
		length_1++;
		length_2++;
	}
	dest[length_1] = '\0';
		return (dest);
}
