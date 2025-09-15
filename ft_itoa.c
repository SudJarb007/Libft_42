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
	return ((char *)malloc(sizeof(char) * (*count + 1)));
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
	else if (str_num == 0)
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

#include <stdlib.h>
#include <unistd.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char *res = ft_itoa(0);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 2)
	{
		char *res = ft_itoa(9);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 3)
	{
		char *res = ft_itoa(-9);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 4)
	{
		char *res = ft_itoa(10);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 5)
	{
		char *res = ft_itoa(-10);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 6)
	{
		char *res = ft_itoa(8124);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 7)
	{
		char *res = ft_itoa(-9874);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 8)
	{
		char *res = ft_itoa(543000);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 9)
	{
		char *res = ft_itoa(-2147483648LL);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 10)
	{
		char *res = ft_itoa(2147483647);
		ft_print_result(res);
		free(res);
	}
	return (0);
}
