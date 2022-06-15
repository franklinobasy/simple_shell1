#include "shell.h"

/**
 * _strncpy - copies n characters of string pointed
 *            to by src, to the buffer pointed by dest.
 * @dest: Pointer to the destination of copied string.
 * @src: Pointer to the src of the source string.
 * @n: number of char to copy
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strcpy - copies characters of string pointed to
 *           by src, to the buffer pointed by dest.
 * @dest: Pointer to the destination of copied string.
 * @src: Pointer to the src of the source string.
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strcat - Concantenates src string to dest string
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to destination string
 */

char *_strcat(char *dest, const char *src)
{
	char *ptrdest;
	const char *ptrsrc;

	ptrdest = dest, ptrsrc = src;

	while (*ptrdest != '\0')
		ptrdest++;

	while (*ptrsrc != '\0')
		*ptrdest++ = *ptrsrc++;

	*ptrdest = '\0';

	return (dest);
}

/**
 * _strcmp - compare two strings
 * @str1: pointer to first string
 * @str2: pointer ro second string
 *
 * Return: 0 if match completely else -1
 */

int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] != '\0'; i++)
		if (str1[i] != str2[i])
			return (-1);

	return (0);
}

/**
 * _strncmp - compare n portion of string
 * @str1: pointer to first string
 * @str2: pointer ro second string
 * @n: number of str1 chars to compare
 *
 * Return: 0 if match completely else -1
 */

int _strncmp(char *str1, char *str2, int n)
{
	int i;

	for (i = 0; str1[i] != '\0' && i < n; i++)
		if (str1[i] != str2[i])
			return (-1);
	return (0);
}
