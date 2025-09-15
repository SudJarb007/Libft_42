/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:21:26 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 16:09:41 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		idx++;
	}
	return (idx);
}

// int main(void)
// {
//     char    s1 = "asdfgh";
//     int test;
//     test = ft_strlen(s1);
//     printf("%d",test);
// }