#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: parameter s
 */
void rev_string(char *s)
{
	int i, middle, len_str, temp_var;

	len_str = strlen(s);
	middle = (len_str - 1) / 2; /*middle position of string */
	for (i = 0; i <= middle; i++) /* iterate until middle of string */
	{
		temp_var = s[i];
		s[i] = s[len_str - i -1]; /* overrides s[i] and gives corresponding value */
		s[len_str - i -1] = temp_var;
	}
}
