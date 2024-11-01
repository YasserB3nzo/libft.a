#include "libft.h"


char	*ft_strrchr(const char *str, int c)
{
	int i = 0;
	char *last_occurrence = NULL;

	while (str[i])
	{
		if (str[i] == (char)c)
		{
			last_occurrence = (char *)&str[i];
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (last_occurrence);
}
