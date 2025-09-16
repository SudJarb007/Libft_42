/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:20:31 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 19:56:30 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	// size_t	j;

	len_dst = 0;
	len_src = 0;
	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= dstsize)
		len_dst = dstsize;
	if ((len_dst < dstsize + 1) && (dstsize > 0))
	{
		while (src[i] != '\0' && (len_dst + i) < (dstsize - 1))
		{
			dst[len_dst + i] = src[i];
			i++;
		}
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
