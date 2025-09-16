/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:21:53 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 19:56:44 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	idx;
	unsigned int	len;

	idx = 0;
	len = ft_strlen(s);
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	while (idx < len)
	{
		new_str[idx] = (f)(idx, s[idx]);
		idx++;
	}
	new_str[idx] = '\0';
	return (new_str);
}
