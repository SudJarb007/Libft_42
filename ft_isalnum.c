/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:11:37 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 15:33:21 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
//         printf("%d\n",ft_isalnum(str[idx]));
//         idx++;
//     }
//     char    c = 'A';
//     test = ft_isalnum(c);
//     printf("%d",test);
// }