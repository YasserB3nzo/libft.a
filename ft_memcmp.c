#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*ptr = (const unsigned char *)ptr1;
	const unsigned char	*p = (const unsigned char *)ptr2;

	while (num--)
	{
		if (*ptr != *p)
		{
			return (*ptr - *p);
		}
		ptr++;
		p++;
	}
	return (0);
}

// #include <stdio.h>
// int main ()
// {
//   char buffer1[] = "yasser benzidiy";
//   char buffer2[] = "yasser benzidiy";

//   int n;

//   n=ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

//   if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
//   else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
//   else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

//   return (0);
// }
