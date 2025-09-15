/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:06:31 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 19:56:26 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	idx;
	int	ans;
	int	sign;

	idx = 0;
	sign = 1;
	ans = 0;
	while ((str[idx] >= 9 && str[idx] <= 13) || (str[idx] == 32))
		idx++;
	if (str[idx] == '+')
		idx++;
	else if (str[idx] == '-')
	{
		sign = sign * (-1);
		idx++;
	}
	while (str[idx] >= 48 && str[idx] <= 57)
	{
		ans = (ans * 10) + str[idx] - '0';
		idx++;
	}
	return (ans * sign);
}
