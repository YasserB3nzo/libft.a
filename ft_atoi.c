/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ybenzidi <marvin@42.fr>                    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/10/25 16:23:56 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/10/25 16:24:07 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_atoi(char *nb)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while ((nb[i] >= 9 && nb[i] <= 13) || (nb[i] == 32))
		i++;
	if (nb[i] == '-' || nb[i] == '+')
	{
		if (nb[i] == '-')
			sign *= -1;
		i++;
	}
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		res = (res * 10) + (nb[i] - '0');
		i++;
	}
	return (res * sign);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d",ft_atoi("+1245abcd124"));

}
*/