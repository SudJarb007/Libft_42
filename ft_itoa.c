/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:44:29 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 19:56:51 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*total(long *tmp_num, int *count, int *sign, long num)
{
	*tmp_num = 0;
	*count = 0;
	*sign = 0;
	if (num == -2147483648)
	{
		num = 2147483648;
		(*sign)++;
	}
	else if (num == 0)
		(*count) = 1;
	else if (num < 0)
	{
		num = num * (-1);
		(*sign)++;
	}
	*tmp_num = num;
	while (num != 0)
	{
		num = num / 10;
		(*count)++;
	}
	return ((char *)malloc(sizeof(char) * (*count + 1 + *sign)));
}

char	*ft_itoa(int n)
{
	char	*str_num;
	int		count;
	int		sign;
	long	tmp_num;
	int		i;

	str_num = total(&tmp_num, &count, &sign, n);
	if (str_num == NULL)
		return (NULL);
	if (sign > 0)
		str_num[0] = '-';
	else if (n == 0)
		str_num[0] = '0';
	i = sign + count;
	str_num[i] = '\0';
	while (tmp_num != 0)
	{
		str_num[i - 1] = ((tmp_num % 10) + '0');
		tmp_num = tmp_num / 10;
		i--;
	}
	return (str_num);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <limits.h>
// #include <string.h>
// void run_test(int test_num_base, int number_to_test)
// {
//     char *my_result = ft_itoa(number_to_test);
//     char real_result[12]; 
//     sprintf(real_result, "%d", number_to_test);
//     printf("--- Testing: %d ---\n", number_to_test);
//     printf("     ft_itoa result: \"%s\"\n", my_result);
//     printf("    Official result: \"%s\"\n", real_result);
//     int content_check = strcmp(my_result, real_result);
//     printf("     [%2d] Content check: %s\n", test_num_base, (content_check == 0) ? "✅ PASS" : "❌ FAIL");
//     size_t my_len = strlen(my_result);
//     size_t real_len = strlen(real_result);
//     printf("     [%2d] Length check:  %s (expected %zu, got %zu)\n\n", test_num_base + 1, (my_len == real_len) ? "✅ PASS" : "❌ FAIL", real_len, my_len);
//     free(my_result);
// }
// int main(void)
// {
//     printf("### Starting ft_itoa Test (12 checks) ###\n\n");
//     run_test(1, INT_MAX);
//     run_test(3, INT_MIN);
//     run_test(5, 0);
//     run_test(7, 1);
//     run_test(9, -1);
//     run_test(11, 42);
//     printf("### Test Finished ###\n");
//     return (0);
// }