#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number. Otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, i, num;

	if (b == NULL)
		return (0);

	length = _strlen(b);

	for (i = 0, num = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * (1 << (length - i - 1));
	}

	return (num);
}
