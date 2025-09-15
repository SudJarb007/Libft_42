/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:26:50 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 19:56:44 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char s, char const *set)
{
	int	idx;
	int	len;

	idx = 0;
	len = ft_strlen(set);
	while (idx < len)
	{
		if (s == set[idx])
			return (1);
		idx++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		idx;
	char	*new_str;

	i = 0;
	j = ft_strlen(s1) - 1;
	idx = 0;
	if ((s1 == NULL) || (set == NULL))
		return (NULL);
	while (s1[i] != '\0' && in_set(s1[i], set))
		i++;
	while (j > i && in_set(s1[j], set))
		j--;
	new_str = malloc(sizeof(char) * ((j - i) + 2));
	if (new_str == NULL)
		return (NULL);
	while (i <= j)
	{
		new_str[idx] = s1[i];
		i++;
		idx++;
	}
	new_str[idx] = '\0';
	return (new_str);
}
