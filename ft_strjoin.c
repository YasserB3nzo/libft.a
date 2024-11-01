#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;
	int		start;
	int		index;

	len = 0;
	start = 0;
	index = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(len);
	while (s1[start])
	{
		ptr[index] = s1[start];
		index++;
		start++;
	}
	start = 0;
	while (s2[start])
	{
		ptr[index] = s2[start];
		index++;
		start++;
	}
	ptr[index] = '\0';
	return (ptr);
}
#include <stdio.h>

int	main(void)
{
	char *str;
	str = ft_strjoin("yasser", "benzidiya");
	printf("%s", str);
}