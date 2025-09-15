/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:40:07 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 19:56:44 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			idx;
	unsigned char	*p_str1;
	unsigned char	*p_str2;

	idx = 0;
	p_str1 = (unsigned char *)str1;
	p_str2 = (unsigned char *)str2;
	while (idx < n)
	{
		if ((unsigned char)p_str1[idx] != (unsigned char)p_str2[idx])
			return ((unsigned char)p_str1[idx] - (unsigned char)p_str2[idx]);
		idx++;
	}
	return (0);
}
// int	main(void)
// {
// 	char s1[] = "Hello World";
// 	char s2[] = "Hello world";
// 	char s3[] = "Hello World";
// 	char s4[] = "Hello";
// 	char s5[] = "Hello Earth";

// 	printf("Comparing s1 and s2 (first 5 bytes):\n");
// 	int result1 = memcmp(s1, s2, 5);
// 	if (result1 == 0)
// 		printf("Result: s1 is equal to s2\n\n");
// 	else
// 		printf("Result: s1 is not equal to s2\n\n");

// 	printf("Comparing s1 and s2 (first 11 bytes):\n");
// 	int result2 = memcmp(s1, s2, 11);
// 	if (result2 == 0)
// 		printf("Result: s1 is equal to s2\n\n");
// 	else
// 		printf("Result: s1 is not equal to s2\n\n");

// 	printf("Comparing s1 and s3 (first 11 bytes):\n");
// 	int result3 = memcmp(s1, s3, 11);
// 	if (result3 == 0)
// 		printf("Result: s1 is equal to s3\n\n");
// 	else
// 		printf("Result: s1 is not equal to s3\n\n");

// 	printf("Comparing s1 and s4 (first 5 bytes):\n");
// 	int result4 = memcmp(s1, s4, 5);
// 	if (result4 == 0)
// 		printf("Result: s1 is equal to s4\n\n");
// 	else
// 		printf("Result: s1 is not equal to s4\n\n");

// 	printf("Comparing s1 and s5 (first 10 bytes):\n");
// 	int result5 = memcmp(s1, s5, 10);
// 	if (result5 < 0)
// 		printf("Result: s1 is less than s5\n\n");
// 	else if (result5 > 0)
// 		printf("Result: s1 is greater than s5\n\n");
// 	else
// 		printf("Result: s1 is equal to s5\n\n");

// 	return (0);
// }