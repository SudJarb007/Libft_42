/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:11:51 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 13:42:22 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int main(void)
// {
//     char str[] = "a45sdfgh";
//     int idx;
//     int test;

//     idx = 0;
//     while (str[idx] != '\0')
//     {
//         printf("%d\n",ft_isalpha(str[idx]));
//         idx++;
//     }

//     char    c = 'A';
//     test = ft_isalpha(c);
// }