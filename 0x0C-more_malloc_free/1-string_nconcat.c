#include "main.h"
#include<stdlib.h>
#include<stddef.h>
#include<string.h>

/**
 * string_nconcat - concatenates two strings of n bytes in str2
 * @s1: char pointer,pointing to s1
 * @s2: char pointer, pointing to s2
 * @n: size of bytes
 * Return: pointer s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1, n2, i = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n1 = strlen(s1);
	n2 = strlen(s2);
	n2 = (n < n2) ? n : n2;
	arr = malloc((n1 + n2 + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	while (i < n1)
	{
		arr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n2)
	{
		arr[n1 + i] = s2[i];
		i++;
	}
	arr[n1 + i] = '\0';
	return (arr);
}
