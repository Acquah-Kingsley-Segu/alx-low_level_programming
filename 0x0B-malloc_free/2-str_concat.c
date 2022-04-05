#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return:
 *	pointer to new string if success
 *	NULL if not sucess
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;

	int len1;

	int len2;

	int i = 0;

	int num;

	if (s1 == NULL && s2 == NULL)
		s3 = NULL;
	else if (s1 == NULL)
		s3 = s2;
	else if (s2 == NULL)
		s3 = s1;
	else
	{
		len1 = strlen(s1);
		len2 = strlen(s2);

		s3 = malloc(sizeof('a') * (len1 + len2 - 1));

		if (s3 == NULL)
			return (NULL);

		while (s1[i] != '\0')
		{
			s3[i] = s1[i];
			i++;
		}

		num = i;
		i = 0;

		while (s2[i] != '\0')
		{
			s3[num + i] = s2[i];
			i++;
		}
	}

	
	return (s3);
}
