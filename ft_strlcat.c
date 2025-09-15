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

size_t ft_strlcat(char *dst, char *src, int n)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	idx;

	len_dst = 0;
	len_src = 0;
	idx = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst > n)
		return (len_src + n);
	while (src[idx] != '\0' && (len_dst + idx) < n - 1)
	{
		dst[len_dst + idx] = src[idx];
		idx++;
	}
	dst[len_dst + idx] = '\0';
	return (len_dst + len_src);
}

#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
    // char dst[] = "asdfgh";
    // char src[] = "AAAHHHSSS";
	char dest[30]; memset(dest, 0, 30);
	char dest_real[30]; memset(dest_real, 0, 30);
	char * src = (char *)"AAAAAAAAA";
    int n = -1;

    printf("ft_ : %d\n",ft_strlcat(dest, src, n));
	printf("%s",dest);
	printf("strlcar_real : %zu\n",strlcat(dest_real, src, n));
	printf("%s",dest_real);
}
