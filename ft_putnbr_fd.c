/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:46:36 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 14:47:41 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	int		idx;

	str = ft_itoa(n);
	idx = 0;
	if (str == NULL)
		return ;
	while (str[idx] != '\0')
	{
		write(fd, &str[idx], 1);
		idx++;
	}
	free(str);
}
