/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:18:04 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 15:19:24 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		idx;
	int		idx_2;

	idx = 0;
	idx_2 = 0;
	str = malloc(((ft_strlen(s1) + ft_strlen(s2) + 1)) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[idx] != '\0')
	{
		str[idx] = s1[idx];
		idx++;
	}
	while (s2[idx_2] != '\0')
	{
		str[idx] = s2[idx_2];
		idx++;
		idx_2++;
	}
	str[idx] = '\0';
	return (str);
}
