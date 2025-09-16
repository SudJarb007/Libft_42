/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:09:52 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 16:10:42 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			idx;
	size_t			total;
	unsigned char	*ptr;

	idx = 0;
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	while (idx < total)
	{
		ptr[idx] = 0;
		idx++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <limits.h>
// int main(void)
// {
//     void *ft_p, *p;
//     size_t nmemb, size;
//     // Test 1-2: Normal allocation and check zeroed memory
//     printf("--- Test 1-2: Normal allocation ---\n");
//     nmemb = 2; size = 2;
//     ft_p = ft_calloc(nmemb, size);
//     p = calloc(nmemb, size);
//     printf("ft_calloc: %s\n", ft_p && !memcmp(ft_p, (char[]){0, 0, 0, 0}, 4) ? "OK" : "KO");
//     printf("calloc: %s\n", p && !memcmp(p, (char[]){0, 0, 0, 0}, 4) ? "OK" : "KO");
//     free(ft_p); free(p);
//     // Test 3: Overflow with SIZE_MAX
//     printf("\n--- Test 3: Overflow with SIZE_MAX ---\n");
//     nmemb = SIZE_MAX; size = SIZE_MAX;
//     ft_p = ft_calloc(nmemb, size);
//     p = calloc(nmemb, size);
//     printf("ft_calloc: %s\n", ft_p == NULL ? "OK" : "KO");
//     printf("calloc: %s\n", p == NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     // Test 4-5: Overflow with INT_MAX / INT_MIN
//     printf("\n--- Test 4-5: Overflow with INT_MAX / INT_MIN ---\n");
//     ft_p = ft_calloc(INT_MAX, INT_MAX);
//     p = calloc(INT_MAX, INT_MAX);
//     printf("ft_calloc(INT_MAX, INT_MAX): %s\n", ft_p == NULL ? "OK" : "KO");
//     printf("calloc(INT_MAX, INT_MAX): %s\n", p == NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     ft_p = ft_calloc(INT_MIN, INT_MIN);
//     p = calloc(INT_MIN, INT_MIN);
//     printf("ft_calloc(INT_MIN, INT_MIN): %s\n", ft_p == NULL ? "OK" : "KO");
//     printf("calloc(INT_MIN, INT_MIN): %s\n", p == NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     // Test 6-8: Zero arguments (expect non-NULL return)
//     printf("\n--- Test 6-8: Zero arguments ---\n");
//     ft_p = ft_calloc(0, 0);
//     p = calloc(0, 0);
//     printf("ft_calloc(0, 0): %s\n", ft_p != NULL ? "OK" : "KO");
//     printf("calloc(0, 0): %s\n", p != NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     ft_p = ft_calloc(0, 5);
//     p = calloc(0, 5);
//     printf("ft_calloc(0, 5): %s\n", ft_p != NULL ? "OK" : "KO");
//     printf("calloc(0, 5): %s\n", p != NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     ft_p = ft_calloc(5, 0);
//     p = calloc(5, 0);
//     printf("ft_calloc(5, 0): %s\n", ft_p != NULL ? "OK" : "KO");
//     printf("calloc(5, 0): %s\n", p != NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     // Test 9-13: Negative arguments (which overflow to large unsigned values)
//     printf("\n--- Test 9-13: Negative arguments ---\n");
//     ft_p = ft_calloc(-5, -5);
//     p = calloc(-5, -5);
//     printf("ft_calloc(-5, -5): %s\n", ft_p == NULL ? "OK" : "KO");
//     printf("calloc(-5, -5): %s\n", p == NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     ft_p = ft_calloc(0, -5);
//     p = calloc(0, -5);
//     printf("ft_calloc(0, -5): %s\n", ft_p != NULL ? "OK" : "KO");
//     printf("calloc(0, -5): %s\n", p != NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     ft_p = ft_calloc(-5, 0);
//     p = calloc(-5, 0);
//     printf("ft_calloc(-5, 0): %s\n", ft_p != NULL ? "OK" : "KO");
//     printf("calloc(-5, 0): %s\n", p != NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     ft_p = ft_calloc(3, -5);
//     p = calloc(3, -5);
//     printf("ft_calloc(3, -5): %s\n", ft_p == NULL ? "OK" : "KO");
//     printf("calloc(3, -5): %s\n", p == NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     ft_p = ft_calloc(-5, 3);
//     p = calloc(-5, 3);
//     printf("ft_calloc(-5, 3): %s\n", ft_p == NULL ? "OK" : "KO");
//     printf("calloc(-5, 3): %s\n", p == NULL ? "OK" : "KO");
//     free(ft_p); free(p);
//     return (0);
// }