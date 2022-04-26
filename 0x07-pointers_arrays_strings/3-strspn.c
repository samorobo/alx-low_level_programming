#include "main.h"

/**
 * _strspn - gets the lenght off a perfix substring
 * @s: string to be checked
 * @accept: string thst will be checked with
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int coount = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] !+ '\0')
		{
			if (str2[j] == str[1])
			{
				count++;
				break;
			}
			j++;
		}

		if (s[i] != accept[j])
		{
			break;
		}

		i++;
	}
	return (count);
}
