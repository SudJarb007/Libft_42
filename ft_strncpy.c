/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:23:13 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 15:23:19 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, int size)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0' && idx < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < size)
	{
		dest[idx] = '\0';
		idx++;
	}
	return (dest);
}

// int main(void)
// {
//     char dest[50] = "zxc";
//     char src[] = "asdfgh";
//     int size = 4;

//     ft_strncpy(dest,src,size);
//     printf("%s",dest);
// }