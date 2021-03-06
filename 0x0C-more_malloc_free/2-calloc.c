#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: ponter to put the constant
 * @b: constant
 * @n: max byte to use
 *
 * Return: s
 */
char *_memset(char*s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: int
 *
 * Return: Pointer
 */
void *_calloc(unsigned  int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	m = malloc(nmemb * size);

	if (m == 0)
	{
		return (NULL);
	}
	_memset(m, 0, nmemb * size);
	return (m);
}
