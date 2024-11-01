#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		lentsrc;
	int		i;

	lentsrc = ft_strlen(src) + 1;
	dest = (char *)malloc(lentsrc * sizeof(char));
	i = 0;
	while (i < lentsrc)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main ()
{
	char array[] = "yasserbenzidiya";
	printf("%s",ft_strdup(array));
}*/
