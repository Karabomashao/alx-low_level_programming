#include "main.h"

/**
 * _isalpha - check if character is alphabert
 * @c: character argument
 * Return: 1 or 0 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
