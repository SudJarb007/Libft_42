/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:40:52 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 14:41:00 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*ptr_s;
	unsigned char	*ptr_d;

	idx = 0;
	ptr_s = (unsigned char *)src;
	ptr_d = (unsigned char *)dest;
	while (idx < n)
	{
		ptr_d[idx] = ptr_s[idx];
		idx++;
	}
	return (dest);
}
// int main ()
// {
//    char src[] = "Hello, world!";
//     char dest[20] = "------------------";

//     size_t n = strlen(src) + 1;

//     printf("\nกำลังเรียก ft_memcpy() เพื่อคัดลอก %zu ไบต์\n\n", n);
//     ft_memcpy(dest, src, n);

//     printf("หลังเรียก ft_memcpy():\n");
//     printf("  ต้นทาง (src): %s\n", src);
//     printf("  ปลายทาง (dest): %s\n", dest);

//     return (0);
// }