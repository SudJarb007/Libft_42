/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:41:16 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 14:42:56 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*ptr_s;
	unsigned char	*ptr_d;

	ptr_s = (unsigned char *)src;
	ptr_d = (unsigned char *)dest;
	if (ptr_d > ptr_s)
	{
		idx = n;
		while (idx > 0)
		{
			idx--;
			ptr_d[idx] = ptr_s[idx];
		}
	}
	else
	{
		idx = 0;
		while (idx < n)
		{
			ptr_d[idx] = ptr_s[idx];
			idx++;
		}
	}
	return ((void *)ptr_d);
}

// int	main(void)
// {
// 	char str[] = "abcdefghij";

// 	printf("--- Scenario 1: src < dest ---\n");
// 	printf("ก่อนเรียก ft_memmove(): %s\n", str);

// 	ft_memmove(str + 3, str, 5);

// 	printf("หลังเรียก ft_memmove(): %s\n", str);

// 	printf("\n");

// 	strcpy(str, "abcdefghij");

// 	printf("--- Scenario 2: dest < src ---\n");
// 	printf("ก่อนเรียก ft_memmove(): %s\n", str);

// 	ft_memmove(str, str + 5, 5);

// 	printf("หลังเรียก ft_memmove(): %s\n", str);

// 	return (0);
// }