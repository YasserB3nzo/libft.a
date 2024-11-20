/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:02:36 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 18:02:36 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s || fd < 0)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// when a file is opend or created using systeme call function m the os assigned a index to the file 
//called file dis , and it acts as a reference to the file so we can preforme operation like read , write 
// file des table are managed by the kernel, each process has a fdt
// the files desc tab is a data struct that holds information about thr file 