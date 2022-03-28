/**
 * _strchr - find first occurence of a character
 * @s: pointer to array
 * @c: character to search
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	char *ptr;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ptr = s;
			break;
		}
		s++;
	}

	return (ptr);
}
