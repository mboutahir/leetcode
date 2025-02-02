#include <stdio.h>

int	strStr(char *haystack, char *needle)
{
	int	i;
	int	j;
	int	k;
	int	flag;

	k = 0;
	i = 0;
	flag = -1;
	if (!haystack || !haystack)
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
