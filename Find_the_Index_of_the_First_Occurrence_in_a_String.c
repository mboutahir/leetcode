#include <stdio.h>

int	strStr(char *haystack, char *needle)
{
	int	i;
	int	j;
	int	flag;
	int	k;

	i = 0;
	k = 0;
	flag = -1;
	if (!haystack || !needle)
		return (-1);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return (i);
		}
		i++;
	}
	return (-1);
}
