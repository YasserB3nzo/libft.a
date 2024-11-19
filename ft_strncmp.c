/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:01:32 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 17:33:49 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int main()
{
    char s1[] = { (char)200, '\0' }; // Signed char 200, which may be interpreted as -56
    char s2[] = { 200, '\0' };       // Unsigned char 200

    int result_signed = ft_strncmp(s1, s2, 1);
    printf("Result without casting (signed): %d\n", result_signed);  // Might give incorrect result on systems where char is signed

    return 0;
}